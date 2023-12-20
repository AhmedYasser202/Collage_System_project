#include "Service.cpp"
/////////// Student ////////////
/// class Student Controller
class StudentController
{
private:
	StudentServiceImpl studentSrevice;
public:
	int addStudent(student std)
	{
		return studentSrevice.addStudent(std);
	}
};

/////////// Course ////////////
/// class Course Controller
class CourseController
{
private:
	CourseServiceImpl courseSrevice;
public:
	int addCourse(Course course)
	{
		return courseSrevice.addCourse(course);
	}
};

/////////// Teacher ////////////
/// class Teacher Controller
class TeacherController
{
private:
	TeacherServiceImpl teacherService;

public:
	int addTeacher(Teacher teacher)
	{
		return teacherService.addTeacher(teacher);
	}
};

