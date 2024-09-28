#include "../include/rigid_body.hpp"

RigidBody::RigidBody(double x, double y, double z, double theta, double m, double I) {
    p_x = x;
    p_y = y;
    p_z = z;

    v_x = 0;
    v_y = 0;
    v_z = 0;

    this->theta = theta;
    v_theta = 0;

    this->m = m;
    this->I = I;
}

RigidBody::~RigidBody() {}
