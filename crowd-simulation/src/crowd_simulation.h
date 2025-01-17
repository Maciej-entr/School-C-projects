#ifndef CROWD_SIMULATION_H
#define CROWD_SIMULATION_H

#include <vector>
#include "collision_avoidance.h"
#include "path_optimization.h"
#include "utils/layout.h"

class CrowdSimulation {
public:
    CrowdSimulation(int numPeople, const Layout& layout);
    void startSimulation();
    void updateSimulation();
    void setLayout(const Layout& newLayout);
    
private:
    int numPeople;
    Layout layout;
    std::vector<Agent> agents; // Assuming Agent is a defined class for individuals in the simulation
    CollisionAvoidance collisionAvoidance;
    PathOptimization pathOptimization;
};

#endif // CROWD_SIMULATION_H