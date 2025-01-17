#ifndef ROOM_H
#define ROOM_H

#include <vector>
#include "person.h"

class Room {
public:
    Room(float width, float height);
    void addPerson(const Person& person);
    void removePerson(const Person& person);
    const std::vector<Person>& getPeople() const;
    float getWidth() const;
    float getHeight() const;

private:
    float width;
    float height;
    std::vector<Person> people;
};

#endif // ROOM_H