#include <iostream>
#include <string>
#include "Student.h"
#include "Course.h"

using namespace std;

Course::Course(string courseCode_){
	courseCode = courseCode_;
}

void Course::printCourse(){
	cout << "Course code: " << courseCode << " students: ";
	for(Student* student : students){
		cout << student->getStudentName() << ", ";
	}
	cout << endl;
}

string Course::getCourseCode(){
	return courseCode;
}

list<Student*> Course::getStudents(){
	return students;
}

void Course::addStudent(Student* student){
	students.push_front(student);
}

int Course::dropStudent(int studentNumber){
	for(Student* student : students){
		if(student->getStudentNumber() == studentNumber){
			students.remove(student);
			return 0;
		}
	}
	return 1;
}
