#include "person.h"
#include <cmath>
#include <vector>

Person::Person(int id, float x, float y) : id(id), position{x, y} {}

void Person::move(float deltaX, float deltaY) {
    position.x += deltaX;
    position.y += deltaY;
}

bool Person::checkOverlap(const Person& other) const {
    float distance = std::sqrt(std::pow(position.x - other.position.x, 2) + 
                                std::pow(position.y - other.position.y, 2));
    return distance < COLLISION_THRESHOLD;
}

const Position& Person::getPosition() const {
    return position;
}

int Person::getId() const {
    return id;
}