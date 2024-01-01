#include "Service.cpp"
/////////// Student ////////////
/// class Student Controller
class StudentController
{
private:
	StudentServiceImpl studentService;
	student studentResult;
public:
	int addStudent(student std)
	{
		return studentService.addStudent(std);
	}
	void showStudentById(int id)
	{
		studentResult = studentService.getStudentByID(id);
		
		if (studentResult.getId() != -1)
		{
			cout << "\t\t ID \t\t Name \t\t Age \t\t Phone Number \t\t GPA\n";
			cout << "\t\t" << studentResult.getId() << "\t\t" << studentResult.getName()
				<< "\t\t" << studentResult.getAge() << "\t\t" << studentResult.getPhoneNumber()
				<< "\t\t" << studentResult.getGpa() << "\n";
		}
	}
};

/////////// Course ////////////
/// class Course Controller
class CourseController
{
private:
	CourseServiceImpl courseService;
	Course courseResult;
	
public:
	int addCourse(Course course)
	{
		return courseService.addCourse(course);
	}
	
	void showCourseById(int id)
	{
		courseResult = courseService.getCourseByID(id);

		if (courseResult.getId() != -1)
		{
			cout << "\t\t ID \t\t Name \t\t Hours\n";
			cout << "\t\t" << courseResult.getId() << "\t\t" << courseResult.getName()
				<< "\t\t" <<courseResult.getHour() <<"\n";
		}
	}
};

/////////// Teacher ////////////
/// class Teacher Controller
class TeacherController
{
private:
	TeacherServiceImpl teacherService;
	Teacher teacherResult;

public:
	int addTeacher(Teacher teacher)
	{
		return teacherService.addTeacher(teacher);
	}

	void showTeacherById(int id)
	{
		teacherResult = teacherService.getTeacherByID(id);

		if (teacherResult.getId() != -1)
		{
			cout << "\t\t ID \t\t Name \t\t Age \t\t Phone Number \t\t Salary\n";
			cout << "\t\t" << teacherResult.getId() << "\t\t" << teacherResult.getName()
				<< "\t\t" << teacherResult.getAge() << "\t\t" << teacherResult.getPhoneNumber()
				<< "\t\t" << teacherResult.getSalary() << "\n";
		}
	}
};

