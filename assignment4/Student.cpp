#include <iostream>
#include <string>
#include <list>
#include <cstdlib>
#include <ctime>
#include "Course.h"
#include "Student.h"

using namespace std;

Student::Student(string studentName_){
	studentName = studentName_;
	studentNumber = rand() % 1000000;
}

void Student::printStudent(){
	cout << "name: " << studentName << " student number: " << studentNumber << " courses: ";
	for(Course* course : courses){
		cout << course->getCourseCode() << ", ";
	}
	cout << endl;
}

void Student::printCourses(){
	for(Course* course : courses){
		cout << course->getCourseCode() << ", ";
	}
	cout << endl;
}

int Student::getStudentNumber(){
	return studentNumber;
}

string Student::getStudentName(){
	return studentName;
}

void Student::addCourse(Course* course){
	courses.push_front(course);
}

int Student::dropCourse(string courseCode){
	for(Course* course : courses){
		if(course->getCourseCode() == courseCode){
			courses.remove(course);
			return 0;
		}
	}
	return 1;
}
