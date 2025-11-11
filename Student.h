#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here
class student : public person {
    private:
		string major;
        int yearLevel;
public: 
   student(string n, int i, string m, int y):person(n,i); 
	void display() override;
};












#endif
