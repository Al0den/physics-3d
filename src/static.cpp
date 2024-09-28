#include "../include/static.hpp"

StaticForceGenerator::StaticForceGenerator(int index, double x, double y, double z) {
    p_index = index;
    m_x = x;
    m_y = y;
    m_z = z;

    static_x = true;
    static_y = true;
    static_z = true;
}

StaticForceGenerator::~StaticForceGenerator() {}

void StaticForceGenerator::initialize(int index, double x, double y, double z) {
    p_index = index;
    m_x = x;
    m_y = y;
    m_z = z;
}

void StaticForceGenerator::apply(SystemState *system) {
    if(static_x) {
        system->f_x[p_index] = 0;
        system->v_x[p_index] = 0;
        system->p_x[p_index] = m_x;
        system->a_x[p_index] = 0;
    }
    if(static_y) {
        system->a_y[p_index] = 0;
        system->f_y[p_index] = 0;
        system->v_y[p_index] = 0;
        system->p_y[p_index] = m_y;
    }
    if(static_z) {
        system->a_z[p_index] = 0;
        system->f_z[p_index] = 0;
        system->v_z[p_index] = 0;
        system->p_z[p_index] = m_z;
    }
}

double StaticForceGenerator::potentialEnergy(void *system) {
    return 0;
}
