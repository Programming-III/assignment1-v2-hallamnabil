#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here
class Student : public Person {
    private:
		string major;
        int yearLevel;
public: 
   Student(string n, int i, string m, int y):Person(n,i); 
	void display() override;
};












#endif
