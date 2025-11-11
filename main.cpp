#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

::Person Person(string n, int i) {
	name = n;
	id = i;
}
void ::Person display() {
	cout << "name: " << name << endl;
	cout << "ID: " << id << endl;

}






// ==================== Student Class Implementation ====================


:: Student(string n, int i, string m, int y):person(n,i){
major=m;
yearLevel = y;
}
void :: Student void display() override{
cout<< "student info: << endl;
cout << name <<endl;
cout << id<< endl;
cout << major<< endl;
cout << yearLevel << endl;
}




// ==================== Instructor Class Implementation ====================

:: Instructor Instructor(string n, int i, string d, int e) : Person(n, i){
   department =d;
   experienceYears = e;
}
void:: Instructor display() override{
cout<< "instructor info: " << endl;
cout<< name<< endl;
cout<< id<< endl;
cout<< department<< endl;
cout<< experienceYears<< endl;
}




// ==================== Course Class Implementation ====================


:: Course Course(string cc, string cn, int ms, Student* s){
   courseCode = cc;
   courseName = cn;
   maxStudents = ms;
   *students = new Student(s);
   currentStudents=0;
}
void :: Course addStudent(const Student& s){
   if(currentStudents==maxStudents)
      cout << "max students reached" << endl;
   else {
      students[currentStudents+1] = s;
      currentStudents++;
   }
}
void:: Course displayCourseInfo(){
   cout<< courseCode << endl;
   cout<< courseName << endl;
   cout<< maxStudents<< endl;
   
   for(int i=0; i<currentStudents; i++)
      cout<<"currently enrolled" << students[i]<< endl;
      
   
}
:: Course ~Course(){
   delete [] students;
}





// ==================== Main Function ====================
int main() {
   Student s("Omar nabil" , 2202,"informatics" , 2 );
   Instructor I("Dr. Lina Khaled", 1002, "computer science", 5);
   Course c("CS101" , "Introduction to Programming", 3, Student* st);
    s.display();
   I.display();
   c.displayCourseInfo();
    return 0;
}
