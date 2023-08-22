clear; clc;
syms q1 q2 q3 q4 q5 q6 q7 dq1 dq2 dq3 dq4 dq5 dq6 dq7
syms d1 d2 d3 d4 d5 d6 d7 d8 d9 d10 d11 %(0.1284, 0.0054, 0.2104, 0.0064, 0.2104, 0.0064, 0.2084, 0.0064, 0.1059, 0.1059, 0.0615)
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
A67_1=[cos(q7) -sin(q7) 0 0;sin(q7) cos(q7) 0 0;0 0 1 -d11;0 0 0 1];
A67_2=[1 0 0 0;0 -1 0 0;0 0 -1 0;0 0 0 1];
A67=A67_1*A67_2;
R01=A01(1:3,1:3);
R12=A12(1:3,1:3);
R23=A23(1:3,1:3);
R34=A34(1:3,1:3);
R45=A45(1:3,1:3);
R56=A56(1:3,1:3);
R67=A67(1:3,1:3);
b0=[0;0;1];
b1=R01*[0;0;1];
b2=R01*R12*[0;0;1];
b3=R01*R12*R23*[0;0;1];
b4=R01*R12*R23*R34*[0;0;1];
b5=R01*R12*R23*R34*R45*[0;0;1];
b6=R01*R12*R23*R34*R45*R56*[0;0;1];
syms X1 Y1 Z1 %(-0.000023, -0.010364,  -0.07336)
syms X2 Y2 Z2 %(-0.000044,  -0.09958, -0.013278)
syms X3 Y3 Z3 %(-0.000044, -0.006641, -0.117892)
syms X4 Y4 Z4 %(-0.000018, -0.075478, -0.015006)
syms X5 Y5 Z5 %( 0.000001, -0.009432, -0.063883)
syms X6 Y6 Z6 %( 0.000001, -0.045483,  -0.00965)
syms X7 Y7 Z7 %(-0.000281, -0.011402, -0.029798)
r0c1=A01*[X1;d1+Z1;d2-Y1;1]; r0c1=r0c1(1:3);
r0c2=A01*A12*[X2;-d4-Z2;d3+Y2;1];
r1c2=r0c2-A01*[0;0;0;1]; r1c2=r1c2(1:3); r0c2=r0c2(1:3);
r0c3=A01*A12*A23*[X3;d5+Z3;d6-Y3;1];
r1c3=r0c3-A01*[0;0;0;1]; r1c3=r1c3(1:3);
r2c3=r0c3-A01*A12*[0;0;0;1]; r2c3=r2c3(1:3); r0c3=r0c3(1:3);
r0c4=A01*A12*A23*A34*[X4;-d8-Z4;d7+Y4;1];
r1c4=r0c4-A01*[0;0;0;1]; r1c4=r1c4(1:3);
r2c4=r0c4-A01*A12*[0;0;0;1]; r2c4=r2c4(1:3);
r3c4=r0c4-A01*A12*A23*[0;0;0;1]; r3c4=r3c4(1:3); r0c4=r0c4(1:3);
r0c5=A01*A12*A23*A34*A45*[X5;d9+Z5;-Y5;1];
r1c5=r0c5-A01*[0;0;0;1]; r1c5=r1c5(1:3);
r2c5=r0c5-A01*A12*[0;0;0;1]; r2c5=r2c5(1:3);
r3c5=r0c5-A01*A12*A23*[0;0;0;1]; r3c5=r3c5(1:3);
r4c5=r0c5-A01*A12*A23*A34*[0;0;0;1]; r4c5=r4c5(1:3); r0c5=r0c5(1:3);
r0c6=A01*A12*A23*A34*A45*A56*[X6;-Z6;d10+Y6;1];
r1c6=r0c6-A01*[0;0;0;1]; r1c6=r1c6(1:3);
r2c6=r0c6-A01*A12*[0;0;0;1]; r2c6=r2c6(1:3);
r3c6=r0c6-A01*A12*A23*[0;0;0;1]; r3c6=r3c6(1:3);
r4c6=r0c6-A01*A12*A23*A34*[0;0;0;1]; r4c6=r4c6(1:3);
r5c6=r0c6-A01*A12*A23*A34*A45*[0;0;0;1]; r5c6=r5c6(1:3); r0c6=r0c6(1:3);
r0c7=A01*A12*A23*A34*A45*A56*A67*[X7;-Y7;-d11-Z7;1];
r1c7=r0c7-A01*[0;0;0;1]; r1c7=r1c7(1:3);
r2c7=r0c7-A01*A12*[0;0;0;1]; r2c7=r2c7(1:3);
r3c7=r0c7-A01*A12*A23*[0;0;0;1]; r3c7=r3c7(1:3);
r4c7=r0c7-A01*A12*A23*A34*[0;0;0;1]; r4c7=r4c7(1:3);
r5c7=r0c7-A01*A12*A23*A34*A45*[0;0;0;1]; r5c7=r5c7(1:3); 
r6c7=r0c7-A01*A12*A23*A34*A45*A56*[0;0;0;1]; r6c7=r6c7(1:3); r0c7=r0c7(1:3);
J1=[[cross(b0,r0c1);b0] zeros(6,6)];
J2=[[cross(b0,r0c2);b0] [cross(b1,r1c2);b1] zeros(6,5)];
J3=[[cross(b0,r0c3);b0] [cross(b1,r1c3);b1] [cross(b2,r2c3);b2] zeros(6,4)];
J4=[[cross(b0,r0c4);b0] [cross(b1,r1c4);b1] [cross(b2,r2c4);b2] [cross(b3,r3c4);b3] zeros(6,3)];
J5=[[cross(b0,r0c5);b0] [cross(b1,r1c5);b1] [cross(b2,r2c5);b2] [cross(b3,r3c5);b3] [cross(b4,r4c5);b4] zeros(6,2)];
J6=[[cross(b0,r0c6);b0] [cross(b1,r1c6);b1] [cross(b2,r2c6);b2] [cross(b3,r3c6);b3] [cross(b4,r4c6);b4] [cross(b5,r5c6);b5] zeros(6,1)];
J7=[[cross(b0,r0c7);b0] [cross(b1,r1c7);b1] [cross(b2,r2c7);b2] [cross(b3,r3c7);b3] [cross(b4,r4c7);b4] [cross(b5,r5c7);b5] [cross(b6,r6c7);b6]];
JL1=J1(1:3,:); JA1=J1(4:6,:);
JL2=J2(1:3,:); JA2=J2(4:6,:);
JL3=J3(1:3,:); JA3=J3(4:6,:);
JL4=J4(1:3,:); JA4=J4(4:6,:);
JL5=J5(1:3,:); JA5=J5(4:6,:);
JL6=J6(1:3,:); JA6=J6(4:6,:);
JL7=J7(1:3,:); JA7=J7(4:6,:);
syms Ixx1 Ixy1 Ixz1 Iyy1 Iyz1 Izz1 %( 0.00457,  0.000001,  0.000002, 0.004831,  0.000448, 0.001409)
syms Ixx2 Ixy2 Ixz2 Iyy2 Iyz2 Izz2 %(0.011088,  0.000005,         0, 0.001072, -0.000691, 0.011255)
syms Ixx3 Ixy3 Ixz3 Iyy3 Iyz3 Izz3 %(0.010932,         0, -0.000007, 0.011127,  0.000606, 0.001043)
syms Ixx4 Ixy4 Ixz4 Iyy4 Iyz4 Izz4 %(0.008147, -0.000001,         0, 0.000631,   -0.0005, 0.008316)
syms Ixx5 Ixy5 Ixz5 Iyy5 Iyz5 Izz5 %(0.001596,         0,         0, 0.001607,  0.000256, 0.000399)
syms Ixx6 Ixy6 Ixz6 Iyy6 Iyz6 Izz6 %(0.001641,         0,         0,  0.00041, -0.000278, 0.001641)
syms Ixx7 Ixy7 Ixz7 Iyy7 Iyz7 Izz7 %(0.000587,  0.000003,  0.000003, 0.000369,  0.000118, 0.000609)
R1=A01_1(1:3,1:3);
R2=R01*A12_1(1:3,1:3);
R3=R01*R12*A23_1(1:3,1:3);
R4=R01*R12*R23*A34_1(1:3,1:3);
R5=R01*R12*R23*R34*A45_1(1:3,1:3);
R6=R01*R12*R23*R34*R45*A56_1(1:3,1:3);
R7=R01*R12*R23*R34*R45*R56*A67_1(1:3,1:3);
I1=[Ixx1 Ixy1 Ixz1;Ixy1 Iyy1 Iyz1;Ixz1 Iyz1 Izz1]; I1=R1*I1*R1.';
I2=[Ixx2 Ixy2 Ixz2;Ixy2 Iyy2 Iyz2;Ixz2 Iyz2 Izz2]; I2=R2*I2*R2.';
I3=[Ixx3 Ixy3 Ixz3;Ixy3 Iyy3 Iyz3;Ixz3 Iyz3 Izz3]; I3=R3*I3*R3.';
I4=[Ixx4 Ixy4 Ixz4;Ixy4 Iyy4 Iyz4;Ixz4 Iyz4 Izz4]; I4=R4*I4*R4.';
I5=[Ixx5 Ixy5 Ixz5;Ixy5 Iyy5 Iyz5;Ixz5 Iyz5 Izz5]; I5=R5*I5*R5.';
I6=[Ixx6 Ixy6 Ixz6;Ixy6 Iyy6 Iyz6;Ixz6 Iyz6 Izz6]; I6=R6*I6*R6.';
I7=[Ixx7 Ixy7 Ixz7;Ixy7 Iyy7 Iyz7;Ixz7 Iyz7 Izz7]; I7=R7*I7*R7.';
syms m1 m2 m3 m4 m5 m6 m7 %(1.377, 1.1636, 1.1636, 0.93, 0.678, 0.678, 0.5)
M=m1*JL1.'*JL1+JA1.'*I1*JA1+m2*JL2.'*JL2+JA2.'*I2*JA2+m3*JL3.'*JL3+JA3.'*I3*JA3+m4*JL4.'*JL4+JA4.'*I4*JA4+m5*JL5.'*JL5+JA5.'*I5*JA5+m6*JL6.'*JL6+JA6.'*I6*JA6+m7*JL7.'*JL7+JA7.'*I7*JA7;
%matlabFunction(M,'File','kinova_M');
C=sym(zeros(7,7)); theta=[q1 q2 q3 q4 q5 q6 q7]; dtheta=[dq1 dq2 dq3 dq4 dq5 dq6 dq7];
for k=1:7
    for j=1:7
        for i=1:7
            C(k,j)=1/2*(diff(M(k,j),theta(i))+diff(M(k,i),theta(j))-diff(M(i,j),theta(k)))*dtheta(i)+C(k,j);
        end
    end
end
%matlabFunction(C,'File','kinova_C');
G=sym(zeros(7,1)); syms g;
for i=1:7
    G(i)=-(m1*[0;0;g].'*JL1(:,i)+m2*[0;0;g].'*JL2(:,i)+m3*[0;0;g].'*JL3(:,i)+m4*[0;0;g].'*JL4(:,i)+m5*[0;0;g].'*JL5(:,i)+m6*[0;0;g].'*JL6(:,i)+m7*[0;0;g].'*JL7(:,i));
end
%matlabFunction(G,'File','kinova_G');