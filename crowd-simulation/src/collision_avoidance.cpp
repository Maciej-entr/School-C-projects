#include "collision_avoidance.h"
#include <vector>
#include <cmath>

CollisionAvoidance::CollisionAvoidance() {}

void CollisionAvoidance::avoidCollision(Agent& agent, const std::vector<Agent>& agents) {
    for (const auto& other : agents) {
        if (&agent != &other) {
            double distance = calculateDistance(agent.position, other.position);
            if (distance < COLLISION_THRESHOLD) {
                adjustAgentPath(agent, other);
            }
        }
    }
}

double CollisionAvoidance::calculateDistance(const Position& pos1, const Position& pos2) {
    return std::sqrt(std::pow(pos1.x - pos2.x, 2) + std::pow(pos1.y - pos2.y, 2));
}

void CollisionAvoidance::adjustAgentPath(Agent& agent, const Agent& other) {
    // Simple avoidance logic: move away from the other agent
    double angle = std::atan2(other.position.y - agent.position.y, other.position.x - agent.position.x);
    agent.position.x -= std::cos(angle) * AVOIDANCE_FORCE;
    agent.position.y -= std::sin(angle) * AVOIDANCE_FORCE;
}

std::vector<Position> CollisionAvoidance::calculateSafePath(const Agent& agent, const std::vector<Agent>& agents) {
    std::vector<Position> safePath;
    // Implement path calculation logic here
    return safePath;
}