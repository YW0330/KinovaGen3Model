clear; clc;
% 包含夾爪 Robotiq 2F-85
syms q1 q2 q3 q4 q5 q6 q7 dq1 dq2 dq3 dq4 dq5 dq6 dq7
syms d0 d1 d2 d3 d4 d5 d6 d7 d8 d9 d10 d11 d12 %(0.1564, 0.1284, 0.0054, 0.2104, 0.0064, 0.2104, 0.0064, 0.2084, 0.0064, 0.1059, 0.1059, 0.0615, 0.12)
len = 8; % 有考慮轉到 base 座標系上
DOF = len-1; % 軸數
% DH 表參數 參考手冊第164頁
a_Arr = [0 0 0 0 0 0 0 0];
alpha_Arr = [pi pi/2 pi/2 pi/2 pi/2 pi/2 pi/2 pi];
d_Arr = [0 -d0-d1 -d2-d4 -d3-d5 -d6-d8 -d7-d9 0 -d10-d11-d12];
theta_Arr = [0 q1 q2+pi q3+pi q4+pi q5+pi q6+pi q7+pi];
% 各齊次轉換矩陣
A = sym('A%d',[4,4,len]);
% 各旋轉矩陣
R = sym('R%d',[3,3,len]);
% 齊次轉換矩陣(夾爪到base)
Abase7 = sym('A%d',[4,4]);
for i=1:len
    a = a_Arr(i);
    alpha = alpha_Arr(i);
    d = d_Arr(i);
    q = theta_Arr(i);
    A(:,:,i) = [cos(q) -sin(q)*cos(alpha) sin(q)*sin(alpha) a*cos(q);sin(q) cos(q)*cos(alpha) -cos(q)*sin(alpha) a*sin(q); 0 sin(alpha) cos(alpha) d;0 0 0 1];
    R(:,:,i) = A(1:3,1:3,i);
    if i==1
        Abase7 = A(:,:,i);
    else
        Abase7 = Abase7*A(:,:,i);
    end
end
% Jacobian
rbe = Abase7*[0;0;0;1];
b = sym('b%d',[3,1,DOF]);
r = sym('r%d',[3,1,DOF]);
J = sym('J%d',[6,DOF]);
for i=1:DOF
    R_tmp = R(:,:,1);
    r_tmp = A(:,:,1);
    for j=2:i
        R_tmp = R_tmp*R(:,:,j);
        r_tmp = r_tmp*A(:,:,j);
    end
    b(:,:,i) = R_tmp*[0;0;1];
    tmp = rbe-r_tmp*[0;0;0;1];  
    r(:,:,i) = tmp(1:3);
    J(:,i) = [cross(b(:,:,i),r(:,:,i));b(:,:,i)];
end
%% joint angle limits 關節角度限制子任務 考慮全部軸
syms q1max q1min q2max q2min q3max q3min q4max q4min q5max q5min q6max q6min q7max q7min
q = [q1 q2 q3 q4 q5 q6 q7];
qmax = [q1max q2max q3max q4max q5max q6max q7max];
qmin = [q1min q2min q3min q4min q5min q6min q7min];
f = 1;
for i=1:length(q)
   f = f*(1-(q(i)/qmax(i)))*((q(i)/qmin(i))-1); 
end
f = simplify(-f);
psi = simplify(jacobian(-f,[q1 q2 q3 q4 q5 q6 q7]).');
matlabFunction(psi,'File','kinova_psi_jointAngleLimits_all');
%% joint angle limits 關節角度限制子任務 僅考慮 2 4 6 軸
syms  q2max q2min q4max q4min q6max q6min 
q = [q2 q4 q6];
qmax = [q2max q4max q6max];
qmin = [q2min q4min q6min];
f = 1;
for i=1:length(q)
   f = f*(1-(q(i)/qmax(i)))*((q(i)/qmin(i))-1); 
end
f = simplify(-f);
psi2 = simplify(jacobian(-f,[q1 q2 q3 q4 q5 q6 q7]).');
matlabFunction(psi2,'File','kinova_psi_jointAngleLimits_246');
%% 關節角度限制子任務測試
clear; clc; close all;
qmax=5; qmin=-5;
q=qmin:0.01:qmax;
f=zeros(1,length(q));
for i=1:length(q)
    f(i)=(1-q(i)/qmax)*(q(i)/qmin-1);
    f(i)=f(i)*f(i)*f(i)*f(i)*f(i)*f(i)*f(i);
end
f=-f;
figure(1);
hold on; grid on;
plot(q,f);
