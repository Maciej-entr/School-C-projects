#include "crowd_simulation.h"
#include "collision_avoidance.h"
#include "path_optimization.h"
#include "utils/layout.h"
#include <vector>
#include <iostream>

CrowdSimulation::CrowdSimulation() {
    // Initialize simulation parameters
}

void CrowdSimulation::setLayout(const Layout& layout) {
    this->layout = layout;
    // Additional setup based on layout
}

void CrowdSimulation::initializeAgents(int numAgents) {
    agents.clear();
    for (int i = 0; i < numAgents; ++i) {
        agents.emplace_back(Agent());
        // Initialize agent properties
    }
}

void CrowdSimulation::startSimulation() {
    while (isRunning) {
        updateSimulation();
        // Render simulation
    }
}

void CrowdSimulation::updateSimulation() {
    for (auto& agent : agents) {
        CollisionAvoidance::avoidCollision(agent, agents);
        PathOptimization::optimizePath(agent, layout);
        agent.move();
    }
}

void CrowdSimulation::stopSimulation() {
    isRunning = false;
}