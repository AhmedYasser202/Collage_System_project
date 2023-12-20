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
		if (std.getName().size() == 0 ||
			std.getName().size() < 5 ||
			std.getName().size() > 7)
		{
			cout << "Invalid Name !\n";
		}

		if (std.getAge() >= 30 || std.getAge() <= 18)
		{
			cout << "Invalid Age !\n";
		}

		if ((std.getPhoneNumber()[0] != '0' ||
			std.getPhoneNumber()[1] != '1' ||
			(
				std.getPhoneNumber()[2] != '1' &&
				std.getPhoneNumber()[2] != '2' &&
				std.getPhoneNumber()[2] != '0' &&
				std.getPhoneNumber()[2] != '5'
				)
			) || std.getPhoneNumber().size() != 11)
		{
			cout << "Invalid Phone Number !\n";
		}

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