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
	ValidationService validationService;
public:
	int addStudent(student std)
	{
		if (studentValidation.validteStudent(std) == 1)
		{
			int id = StudentRebository.addStudent(std);
			if (id == -1)
			{
				validationService.fullData("student");
			}
			else
			{
				return id;
			}
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
	ValidationService validationService;
public:
	int addCourse(Course course)
	{
		if (courseValidation.validateCourse(course) == 1)
		{
			int id = CourseRebository.addCourse(course);
			if (id == -1)
			{
				validationService.fullData("course");
			}
			else
			{
				return id;
			}
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
	ValidationService validationService;
public:
	int addTeacher(Teacher teacher)
	{
		if (teacherValidation.validateTeacher(teacher) == 1)
		{
			int id = TeacherRebository.addTeacher(teacher);
			if (id == -1)
			{
				validationService.fullData("Teacher");
			}
			else
			{
				return id;
			}
		}
		return -1;
	}
};