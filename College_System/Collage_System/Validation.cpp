#include "Rebo.cpp"            /******** Validation Classes ********/
// studentValidation Class
class studentValidation
{
public:
	int validteStudent(student std)
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
			return 1;
		}
		return -1;
	}
};
// CourseValidation Class

class CourseValidation
{
public:
	int validateCourse(Course course)
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
			return 1;
		}
		return -1;
	}
};
// TeacherValidation Class
class TeacherValidation
{
public:
	int validateTeacher(Teacher teacher)
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
			return 1;
		}
		return -1;
	}
};

class ValidationService
{
public:
	void fullData(string type)
	{
		cout << "Full " << type << " !\n";
	}
};