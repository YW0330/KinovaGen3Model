#ifndef KINOVAGEN3MODEL_H
#define KINOVAGEN3MODEL_H

// Type Definitions
void kinova_M(double q1, double q2, double q3, double q4, double q5,
              double q6, double q7, double M[49]);

void kinova_C(double q1, double q2, double q3, double q4, double q5,
              double q6, double q7, double dq1, double dq2, double dq3,
              double dq4, double dq5, double dq6, double dq7, double C[49]);

void kinova_G(double g, double q1, double q2, double q3, double q4,
              double q5, double q6, double q7, double G[7]);

void kinova_M_gripper(double q1, double q2, double q3, double q4,
                      double q5, double q6, double q7, double M[49]);

void kinova_C_gripper(double q1, double q2, double q3, double q4, double q5,
                      double q6, double q7, double dq1, double dq2, double dq3,
                      double dq4, double dq5, double dq6, double dq7, double C[49]);

void kinova_G_gripper(double g, double q1, double q2, double q3,
                      double q4, double q5, double q6, double q7,
                      double G[7]);

void kinova_M_gripper2(double q1, double q2, double q3, double q4,
                       double q5, double q6, double q7, double M[49]);

void kinova_C_gripper2(double q1, double q2, double q3, double q4,
                       double q5, double q6, double q7, double dq1,
                       double dq2, double dq3, double dq4, double dq5,
                       double dq6, double dq7, double C[49]);

void kinova_J_and_Jinv(double q1, double q2, double q3, double q4, double q5, double q6, double J[42], double Jinv[42]);

void kinova_FK(double q1, double q2, double q3, double q4, double q5,
               double q6, double q7, double X[6]);

void kinova_psi_jointAngleLimits(
    double q1, double q2, double q3, double q4, double q5, double q6, double q7,
    double q1min, double q2min, double q3min, double q4min, double q5min,
    double q6min, double q7min, double q1max, double q2max, double q3max,
    double q4max, double q5max, double q6max, double q7max, double psi[7]);
    
void kinova_psi_manipulability(double q1, double q2, double q3, double q4,
  double q5, double q6, double psi[7]);

double kinova_manipulability(double q1, double q2, double q3, double q4,
                             double q5, double q6);
#endif
