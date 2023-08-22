clear; clc;
syms q1 q2 q3 q4 q5 q6 q7
syms d0 d1 d2 d3 d4 d5 d6 d7 d8 d9 d10 d11 d12 %(0.1564, 0.1284, 0.0054, 0.2104, 0.0064, 0.2104, 0.0064, 0.2084, 0.0064, 0.1059, 0.1059, 0.0615, 0.12)
Ab0=[1 0 0 0;0 -1 0 0;0 0 -1 d0;0 0 0 1];
A01_1=[cos(q1) -sin(q1) 0 0;sin(q1) cos(q1) 0 0;0 0 1 -d1;0 0 0 1];
A01_2=[1 0 0 0;0 0 -1 d2;0 1 0 0;0 0 0 1];
A01=A01_1*A01_2;
A12_1=[cos(q2) -sin(q2) 0 0;sin(q2) cos(q2) 0 0;0 0 1 -d4;0 0 0 1];
A12_2=[1 0 0 0;0 0 1 -d3;0 -1 0 0;0 0 0 1];
A12=A12_1*A12_2;
A23_1=[cos(q3) -sin(q3) 0 0;sin(q3) cos(q3) 0 0;0 0 1 -d5;0 0 0 1];
A23_2=[1 0 0 0;0 0 -1 d6;0 1 0 0;0 0 0 1];
A23=A23_1*A23_2;
A34_1=[cos(q4) -sin(q4) 0 0;sin(q4) cos(q4) 0 0;0 0 1 -d8;0 0 0 1];
A34_2=[1 0 0 0;0 0 1 -d7;0 -1 0 0;0 0 0 1];
A34=A34_1*A34_2;
A45_1=[cos(q5) -sin(q5) 0 0;sin(q5) cos(q5) 0 0;0 0 1 -d9;0 0 0 1];
A45_2=[1 0 0 0;0 0 -1 0;0 1 0 0;0 0 0 1];
A45=A45_1*A45_2;
A56_1=[cos(q6) -sin(q6) 0 0;sin(q6) cos(q6) 0 0;0 0 1 0;0 0 0 1];
A56_2=[1 0 0 0;0 0 1 -d10;0 -1 0 0;0 0 0 1];
A56=A56_1*A56_2;
A67_1=[cos(q7) -sin(q7) 0 0;sin(q7) cos(q7) 0 0;0 0 1 -d11-d12;0 0 0 1];
A67_2=[1 0 0 0;0 -1 0 0;0 0 -1 0;0 0 0 1];
A67=A67_1*A67_2;
Rb0=Ab0(1:3,1:3);
R01=A01(1:3,1:3);
R12=A12(1:3,1:3);
R23=A23(1:3,1:3);
R34=A34(1:3,1:3);
R45=A45(1:3,1:3);
R56=A56(1:3,1:3);
R67=A67(1:3,1:3);
b0=Rb0*[0;0;1];
b1=Rb0*R01*[0;0;1];
b2=Rb0*R01*R12*[0;0;1];
b3=Rb0*R01*R12*R23*[0;0;1];
b4=Rb0*R01*R12*R23*R34*[0;0;1];
b5=Rb0*R01*R12*R23*R34*R45*[0;0;1];
b6=Rb0*R01*R12*R23*R34*R45*R56*[0;0;1];
rbe=Ab0*A01*A12*A23*A34*A45*A56*A67*[0;0;0;1];
r0e=rbe-Ab0*[0;0;0;1]; r0e=r0e(1:3);
r1e=rbe-Ab0*A01*[0;0;0;1]; r1e=r1e(1:3);
r2e=rbe-Ab0*A01*A12*[0;0;0;1]; r2e=r2e(1:3);
r3e=rbe-Ab0*A01*A12*A23*[0;0;0;1]; r3e=r3e(1:3);
r4e=rbe-Ab0*A01*A12*A23*A34*[0;0;0;1]; r4e=r4e(1:3);
r5e=rbe-Ab0*A01*A12*A23*A34*A45*[0;0;0;1]; r5e=r5e(1:3); 
r6e=rbe-Ab0*A01*A12*A23*A34*A45*A56*[0;0;0;1]; r6e=r6e(1:3);
J=[[cross(b0,r0e);b0] [cross(b1,r1e);b1] [cross(b2,r2e);b2] [cross(b3,r3e);b3] [cross(b4,r4e);b4] [cross(b5,r5e);b5] [cross(b6,r6e);b6]];

%% manipulability 操作度子任務
det = Det(J*J.');
f = sqrt(det);
matlabFunction(f,'File','kinova_manipulability');
% psi = jacobian(f,[q1 q2 q3 q4 q5 q6 q7]).';
% matlabFunction(psi,'File','kinova_psi_manipulability');
%% 行列式
function determinant=Det(M)
if size(M,1)==1
    determinant=M(1,1);
    return;
elseif size(M,1)==2
    determinant=M(1,1)*M(2,2)-M(1,2)*M(2,1);
    return;
end
determinant=0;
Mat=sym(zeros(size(M,1)-1,size(M,1)-1)); %餘子式(minor matrix)
for c=1:size(M,1)
    Mat_i=1;
    for i=2:size(M,1)
        Mat_j=1;
        for j=1:size(M,1)
            if j==c
                continue;
            end
            Mat(Mat_i,Mat_j)= M(i,j);
            Mat_j=Mat_j+1;
        end
        Mat_i=Mat_i+1;
    end
    if mod(c+1,2)==0
        determinant=determinant+M(1,c)*Det(Mat);
    else
        determinant=determinant-M(1,c)*Det(Mat);
    end
end
end
