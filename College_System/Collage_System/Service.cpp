#include "Rebo.cpp"
/////////////// Student ////////////////
//// Student service interface
class StudentService
{
public:
	virtual int addStudent(student std) = 0;
	
};
////// Student service Impl
class StudentServiceImpl
{
private:
	studentRebositoryImpl StudentRebository;
public:
	int addStudent(student std)
	{
		return StudentRebository.addStudent(std);
	}
};



/////////////////// Course ///////////////////////
///// Course service interface
class CourseService
{
public:
	virtual int addCourse(Course course) = 0;

};
// Course Service Impl
class CourseServiceImpl
{
private:
	CourseRebositoryImpl CourseRebository;
public:
	int addCourse(Course course)
	{
		return CourseRebository.addCourse(course);
	}
};

////////////////// Teacher ////////////////
///// Teacher service interface
class TeacherService
{
public:
	virtual int addTeacher(Teacher teacher) = 0;

};
///// Teacher servise Impl
class TeacherServiceImpl
{
private:
	TeacherRebositoryImpl TeacherRebository;
public:
	int addTeacher(Teacher teacher)
	{
		return TeacherRebository.addTeacher(teacher);
	}
};