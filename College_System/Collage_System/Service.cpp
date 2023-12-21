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
		else if (std.getAge() >= 30 || std.getAge() <= 18)
		{
			cout << "Invalid Age !\n";
		}
		else if (std.getGpa() >= 10 || std.getGpa() < 0)
		{
			cout << "Invalid GPA !\n";
		}
		else if ((std.getPhoneNumber()[0] != '0' ||
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
		else
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
public:
	int addCourse(Course course)
	{
		if (course.getName().size() == 0 ||
			course.getName().size() < 4)
		{
			cout << "Invalid Name\n";
		}
		else if (course.getHour() > 15 || course.getHour() < 5)
		{
			cout << "Invalid Course Hours !\n";
		}
		else
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
public:
	int addTeacher(Teacher teacher)
	{
		if (teacher.getName().size() == 0 ||
			teacher.getName().size() < 5 ||
			teacher.getName().size() > 7)
		{
			cout << "Invalid Name !\n";
		}
		else if (teacher.getAge() > 60 || teacher.getAge() < 30)
		{
			cout << "Invalid Age !\n";
		}
		else if ((teacher.getPhoneNumber()[0] != '0' ||
			teacher.getPhoneNumber()[1] != '1' ||
			(
				teacher.getPhoneNumber()[2] != '1' &&
				teacher.getPhoneNumber()[2] != '2' &&
				teacher.getPhoneNumber()[2] != '0' &&
				teacher.getPhoneNumber()[2] != '5'
				)
			) || teacher.getPhoneNumber().size() != 11)
		{
			cout << "Invalid Phone Number !\n";
		}
		else if (teacher.getSalary() < 5000 || teacher.getSalary() > 15000)
		{
			cout << "Invalid Salary !\n";
		}
		else
		{
			return TeacherRebository.addTeacher(teacher);
		}
		return -1;
	}
};