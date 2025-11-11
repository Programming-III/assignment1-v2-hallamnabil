#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here

class instructor : public person {
private:
    string department;
    int experienceYears;
public:
    void display() override;
};










#endif
