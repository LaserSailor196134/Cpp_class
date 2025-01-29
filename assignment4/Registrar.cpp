#include <iostream>
#include <string>
#include "Student.h"
#include "Course.h"
#include "Registrar.h"

using namespace std;

Registrar::Registrar(){}

void Registrar::addCourse(Course* course){
	courses.push_front(course);
}

void Registrar::addStudent(Student* student){
	students.push_front(student);
}

list<Student*> Registrar::getStudents(){
	return students;
}

list<Course*> Registrar::getCourses(){
	return courses;
}

int Registrar::enroll(int studentNumber, string courseCode){
	Student* student = findStudent(studentNumber);
	Course* course = findCourse(courseCode);
	if(student == NULL || course == NULL){return 1;}
	student->addCourse(course);
	course->addStudent(student);
	return 0;
}

int Registrar::drop(int studentNumber, string courseCode){
	Student* student = findStudent(studentNumber);
	Course* course = findCourse(courseCode);
	if(student == NULL || course == NULL){return 1;}
	student->dropCourse(courseCode);
	course->dropStudent(studentNumber);
	return 0;
}

Course* Registrar::findCourse(string courseCode){
	for(Course* course : courses){
		if(course->getCourseCode() == courseCode){
			return course;
		}
	}
	return NULL;
}

Student* Registrar::findStudent(int studentNumber){
	for(Student* student : students){
		if(student->getStudentNumber() == studentNumber){
			return student;
		}
	}
	return NULL;
}

Registrar::~Registrar(){
	for(Course* course : courses){
		delete course;
	}
	for(Student* student : students){
		delete student;
	}
}
