#ifndef PERSON_H
#define PERSON_H

#include <utility>

class Person {
public:
    Person(int id, float x, float y);
    void move(float deltaX, float deltaY);
    std::pair<float, float> getPosition() const;
    int getId() const;

private:
    int id;
    float x, y; // Position of the person
};

#endif // PERSON_H