#ifndef Course_h
#define Course_h
class Student;//forward declaration
#include <string>
#include <list>
#include "Student.h"

using namespace std;

class Course{
	public:
		Course(string courseCode);
		void printCourse();
		string getCourseCode();
		list<Student*> getStudents();
		friend class Registrar;
	private:
		void addStudent(Student*);
		int dropStudent(int studentNumber);
		string courseCode;
		list<Student*> students;
};
#endif //Course_h
