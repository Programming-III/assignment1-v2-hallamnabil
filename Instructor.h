#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here

class Instructor : public Person {
private:
    string department;
    int experienceYears;
public:
    Instructor(string n, int i, string d, int e) : person(n, i);
    void display() override;
};










#endif
