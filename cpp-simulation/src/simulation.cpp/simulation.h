#ifndef SIMULATION_H
#define SIMULATION_H

#include <vector>
#include "person.h"
#include "room.h"

class Simulation {
public:
    Simulation(int numPeople, int numRooms);
    void initialize();
    void run();
    
private:
    std::vector<Person> people;
    std::vector<Room> rooms;
    void checkCollisions();
};

#endif // SIMULATION_H