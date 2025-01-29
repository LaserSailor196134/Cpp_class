#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Registrar.h"
#include "Course.h"
#include "Student.h"

using namespace std;

int main(){
	srand(time(NULL));//seeding my random number generator
	Registrar* registrar = new Registrar();
	Course* course1 = new Course("course1");
	Course* course2 = new Course("course2");
	Course* course3 = new Course("course3");
	Student* student1 = new Student("Student One");
	Student* student2 = new Student("Student Two");
	Student* student3 = new Student("Student Three");
	Student* student4 = new Student("Student Four");
	Student* student5 = new Student("Student Five");
	registrar->addCourse(course1);
	registrar->addCourse(course2);
	registrar->addCourse(course3);
	int studNum1 = student1->getStudentNumber();
	int studNum2 = student2->getStudentNumber();
	int studNum3 = student3->getStudentNumber();
	int studNum4 = student4->getStudentNumber();
	int studNum5 = student5->getStudentNumber();
	registrar->addStudent(student1);
	registrar->addStudent(student2);
	registrar->addStudent(student3);
	registrar->addStudent(student4);
	registrar->addStudent(student5);
	registrar->enroll(studNum1, "course1");
	registrar->enroll(studNum1, "course2");
	registrar->enroll(studNum1, "course3");
	registrar->enroll(studNum2, "course1");
	registrar->enroll(studNum2, "course2");
	registrar->enroll(studNum3, "course1");
	registrar->enroll(studNum4, "course2");
	registrar->enroll(studNum5, "course3");
	for(Student* student : registrar->getStudents()){
		student->printStudent();
	}
	for(Course* course : registrar->getCourses()){
		course->printCourse();
	}
	registrar->drop(studNum1, "course1");
	registrar->findStudent(studNum1)->printStudent();
	registrar->findCourse("course1")->printCourse();
	delete registrar;
	return 0;
}
