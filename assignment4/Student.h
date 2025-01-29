#ifndef Student_h
#define Student_h
class Course;//forward declaration
#include <string>
#include <list>
#include "Course.h"

using namespace std;

class Student{
	public:
		Student(string studentName_);
		void printStudent();
		void printCourses();
		int getStudentNumber();
		string getStudentName();
		friend class Registrar;
	private:
		void addCourse(Course*);
		int dropCourse(string courseCode);
		int studentNumber;
		string studentName;
		list<Course*> courses;
};

#endif //Student_h
