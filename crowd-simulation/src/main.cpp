#include <iostream>
#include "crowd_simulation.h"

int main() {
    int numPeople;
    std::string layoutFile;

    std::cout << "Welcome to the Crowd Simulation!" << std::endl;
    std::cout << "Enter the number of people in the simulation: ";
    std::cin >> numPeople;

    std::cout << "Enter the layout file (e.g., layout.txt): ";
    std::cin >> layoutFile;

    CrowdSimulation simulation(numPeople, layoutFile);
    simulation.startSimulation();

    return 0;
}