#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
class course{
private:
string courseCode;
string courseName;
int maxStudents;
Student* students;
int currentStudents;
public: 
course(string cc, string cn, int ms, Student* s);
void addStudent(const Student& s);
void displayCourseInfo();

};














#endif
