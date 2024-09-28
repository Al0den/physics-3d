#pragma once

class RigidBody {
    public:
        RigidBody(double x, double y, double z, double theta, double m, double I);
        ~RigidBody();

        void localToWorld(double lx, double ly, double lz, double *wx, double *wy, double *wz);
        void worldToLocal(double wx, double wy, double wz, double *lx, double *ly, double *lz);

        double p_x;
        double p_y;
        double p_z;
        
        double v_x;
        double v_y;
        double v_z;

        double theta;
        double v_theta;

        double m;
        double I;

        int index;

        void reset();
        void energy() const;
};
