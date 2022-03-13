#ifndef KINOVAGEN3MODEL_H
#define KINOVAGEN3MODEL_H

// Type Definitions
class MassMatrix {
public:
    MassMatrix();
    ~MassMatrix();
    void model_M(double q1, double q2, double q3, double q4, double q5, double q6,
        double q7, double M[49]);
};

class CoriolisMatrix {
public:
    CoriolisMatrix();
    ~CoriolisMatrix();
    void model_C(double q1, double q2, double q3, double q4, double q5, double q6,
        double q7, double dq1, double dq2, double dq3, double dq4,
        double dq5, double dq6, double dq7, double C[49]);
};

class GravityMatrix {
public:
    GravityMatrix();
    ~GravityMatrix();
    void model_G(double q1, double q2, double q3, double q4, double q5, double q6,
        double q7, double g, double G[7]);
};

class MatrixJ
{
public:
    MatrixJ();
    ~MatrixJ();
    void model_J(double q1, double q2, double q3, double q4, double q5, double q6,
        double q7, double Jacobi[42], double Jacobi_inv[42], double
        Jacobi_tra[42]);
};

class ModelPosition
{
public:
    ModelPosition();
    ~ModelPosition();
    void model_X_beforre_gripper(double q1, double q2, double q3, double q4,
        double q5, double q6, double q7, double Pbgripper[3]);
};

#endif