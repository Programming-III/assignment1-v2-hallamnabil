#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;


class person{
private:
string name;
int id;
public:
person(string s, int i);
virtual void display();
};











#endif
