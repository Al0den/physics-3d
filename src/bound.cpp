#include "../include/bound.hpp"

#include <stdio.h>

BoundForceGenerator::BoundForceGenerator(double x, double y, double z, int index) {
    m_x = x;
    m_y = y;
    m_z = z;
    this->index = index;
}

BoundForceGenerator::~BoundForceGenerator() {}

void BoundForceGenerator::apply(SystemState *system) {
    if(system->p_x[index] > m_x) {
        system->p_x[index] = m_x;
        if(system->v_x[index] > 0) {
            system->v_x[index] = 0;
        }
        if(system->a_x[index] > 0) {
            system->a_x[index] = 0;
        }

    }
    if(system->p_y[index] > m_y) {
        system->p_y[index] = m_y;
        if(system->v_y[index] > 0) {
            system->v_y[index] = 0;
        }
        if(system->a_y[index] > 0) {
            system->a_y[index] = 0;
        }
    }
    if(system->p_z[index] > m_z) {
        system->p_z[index] = m_z;
        if(system->v_z[index] > 0) {
            system->v_z[index] = 0;
        }
        if(system->a_z[index] > 0) {
            system->a_z[index] = 0;
        }
    }


    if(system->p_x[index] < -m_x) {
        system->p_x[index] = -m_x;
        if (system->v_x[index] < 0) {
            system->v_x[index] = 0;
        }
        if (system->a_x[index] < 0) {
            system->a_x[index] = 0;
        }
    }

    if(system->p_y[index] < -m_y) {
        system->p_y[index] = -m_y;
        if (system->v_y[index] < 0) {
            system->v_y[index] = 0;
        }
        if (system->a_y[index] < 0) {
            system->a_y[index] = 0;
        }
    }

    if(system->p_z[index] < -m_z) {
        system->p_z[index] = -m_z;
        if (system->v_z[index] < 0) {
            system->v_z[index] = 0;
        }
        if (system->a_z[index] < 0) {
            system->a_z[index] = 0;
        }
    }

}

double BoundForceGenerator::potentialEnergy(void *system) {
    return 0;
}
