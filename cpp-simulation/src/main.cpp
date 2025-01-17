#include <iostream>
#include <vector>
#include "person.h"
#include "room.h"
#include "simulation.h"

int main() {
    const int num_people = 100;
    const int room_width = 10;
    const int room_height = 10;

    Room room1(room_width, room_height);
    Room room2(room_width, room_height);
    Room room3(room_width, room_height);
    Room room4(room_width, room_height);

    std::vector<Person> people;
    for (int i = 0; i < num_people; ++i) {
        people.emplace_back(i, room_width, room_height);
    }

    Simulation simulation;
    simulation.addRoom(room1);
    simulation.addRoom(room2);
    simulation.addRoom(room3);
    simulation.addRoom(room4);
    simulation.addPeople(people);

    simulation.run();

    return 0;
}