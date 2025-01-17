#include "room.h"
#include <vector>

Room::Room(int width, int height) : width(width), height(height) {}

void Room::addPerson(Person* person) {
    if (isPositionValid(person->getPosition())) {
        people.push_back(person);
    }
}

void Room::removePerson(Person* person) {
    people.erase(std::remove(people.begin(), people.end(), person), people.end());
}

bool Room::isPositionValid(const Position& position) {
    return position.x >= 0 && position.x < width && position.y >= 0 && position.y < height;
}

const std::vector<Person*>& Room::getPeople() const {
    return people;
}

int Room::getWidth() const {
    return width;
}

int Room::getHeight() const {
    return height;
}