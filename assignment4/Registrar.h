#ifndef Registrar_h
#define Registrar_h
#include <string>
#include <list>
#include "Student.h"
#include "Course.h"

using namespace std;

class Registrar{
	public:
		Registrar();
		list<Course*> getCourses();
		list<Student*> getStudents();
		void addCourse(Course*);
		void addStudent(Student*);
		int enroll(int studentNumber, string courseCode);
		int drop(int studentNumber, string courseCode);
		Course* findCourse(string courseCode);
		Student* findStudent(int studentNumber);
		~Registrar();
	private:
		list<Student*> students;
		list<Course*> courses;
};




#endif //Regsitrar_h
