#include "Validation.cpp"
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
	studentValidation studentValidation;
public:
	int addStudent(student std)
	{
		if (studentValidation.validteStudent(std) == 1)
		{
			return StudentRebository.addStudent(std);
		}
		return -1;
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
	CourseValidation courseValidation;
public:
	int addCourse(Course course)
	{
		if (courseValidation.validateCourse(course) == 1)
		{
			return CourseRebository.addCourse(course);
		}
		return -1;
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
	TeacherValidation teacherValidation;
public:
	int addTeacher(Teacher teacher)
	{
		if (teacherValidation.validateTeacher(teacher) == 1)
		{
			return TeacherRebository.addTeacher(teacher);
		}
		return -1;
	}
};