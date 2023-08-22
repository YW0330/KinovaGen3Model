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
% 測試: 各軸角度皆為 0
% double(subs(Abase7, [q1 q2 q3 q4 q5 q6 q7  d0 d1 d2 d3 d4 d5 d6 d7 d8 d9 d10 d11 d12],[0 0 0 0 0 0 0 0.1564 0.1284, 0.0054, 0.2104, 0.0064, 0.2104, 0.0064, 0.2084, 0.0064, 0.1059, 0.1059, 0.0615, 0.12]));
% matlabFunction(Abase7,'File','kinova_FK');
%% Jacobian
rbe = Abase7*[0;0;0;1]; % 3x1 xyz
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
% 測試: 各軸角度皆為 0
double(subs(J, [q1 q2 q3 q4 q5 q6 q7  d0 d1 d2 d3 d4 d5 d6 d7 d8 d9 d10 d11 d12],[0 0 0 0 0 0 0 0.1564 0.1284, 0.0054, 0.2104, 0.0064, 0.2104, 0.0064, 0.2084, 0.0064, 0.1059, 0.1059, 0.0615, 0.12]))
% 存成 matlab function
% matlabFunction(J,'File','kinova_J');


 