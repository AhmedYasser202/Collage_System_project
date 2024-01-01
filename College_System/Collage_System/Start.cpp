#include "Controller.cpp"
int process;
int id;

void ShowSystem()
{
	cout << "\t\t************* Faculty Management System *************\n";
	cout << "Please enter the process you need to do !\n";
	cout << "1- about students" << "\t\t" << "2- about courses\n";
	cout << "3- about teachers" << "\t\t" << "4- Exit\n";
}

void showList(string str)
{
	cout << "\t\t************* " << str << " Management *************\n";
	cout << "1- add " << str << "\t\t2- Remove " << str << "\n";
	cout << "3- edit " << str << "\t\t4- show " << str << "\n";
	cout << "5- Show "<<str<<" By ID \t\t"<< "6- Exit\n";
}

void AddStudent()
{
	student std;
	cout << "please enter student Data: \n";
	cout << "Enter student name : ";
	string name;
	cin >> name;
	std.setName(name);
	cout << "Enter student age : ";
	int age;
	cin >> age;
	std.setAge(age);
	cout << "Enter student Gpa : ";
	double Gpa;
	cin >> Gpa;
	std.setGpa(Gpa);
	cout << "Enter student phoneNumber : ";
	string phoneNumber;
	cin >> phoneNumber;
	std.setPhoneNumber(phoneNumber);
	StudentController studentController;
	 id = studentController.addStudent(std);
	if (id != -1)
	{
		cout << "Successfully add Student with id [" << id << "]\n";
	}
}
void AddCourse()
{
	Course course;
	cout << "Please enter Course Data: \n";
	cout << "Enter Course name : ";
	string name;
	cin >> name;
	course.setName(name);

	cout << "Enter Course hours : ";
	double hour;
	cin >> hour;
	course.setHour(hour);
	CourseController courseController;
	 id = courseController.addCourse(course);
	if (id != -1)
	{
		cout << "Successfully add Course with id [" << id << "]\n";
	}
}
void AddTeacher()
{
	Teacher teacher;
	cout << "please enter Teacher Data: \n";
	cout << "Enter Teacher name : ";
	string name;
	cin >> name;
	teacher.setName(name);
	cout << "Enter Teacher age : ";
	int age;
	cin >> age;
	teacher.setAge(age);
	cout << "Enter Teacher PhoneNumber :";
	string phoneNumber;
	cin >> phoneNumber;
	teacher.setPhoneNumber(phoneNumber);
	cout << "Enter Teacher Salary :";
	double salary;
	cin >> salary;
	teacher.setSalary(salary);
	TeacherController teacherController;
	id = teacherController.addTeacher(teacher);
	if (id != -1)
	{
		cout << "Successfully add Teacher with id [" << id << "]\n";
	}
}


void showStudentById()
{
	cout << "Please enter Student ID : ";
	cin >> id;
	StudentController studentController;
	studentController.showStudentById(id);

}

void showCourseById()
{
	cout << "Please enter Course ID : ";
	cin >> id;
	CourseController courseController;
	courseController.showCourseById(id);

}

void showTeacherById()
{
	cout << "Please enter Teacher ID : ";
	cin >> id;
	TeacherController teacherController;
	teacherController.showTeacherById(id);

}

void switchStudent()
{
	switch (process)
	{
	case 1:
		AddStudent();
		break;
	case 2:
		cout << "Remove student\n";
		break;
	case 3:
		cout << "Edit Student\n";
		break;
	case 4:
		cout << "show student\n";
		break;
	case 5:
		showStudentById();
		break;
	case 6:

		break;
	default:
		cout << "Invalid Choise\n";
		break;
	}
}

void switchCourse()
{
	switch (process)
	{
	case 1:
		AddCourse();
		break;
	case 2:
		cout << "Remove Course\n";
		break;
	case 3:
		cout << "Edit Course\n";
		break;
	case 4:
		cout << "show Course\n";
		break;
	case 5:
		showCourseById();
		break;
	case 6:

		break;
	default:
		cout << "Invalid Choise\n";
		break;
	}
}

void switchTeacher()
{
	switch (process)
	{
	case 1:
		AddTeacher();
		break;
	case 2:
		cout << "Remove Teacher\n";
		break;
	case 3:
		cout << "Edit Teacher\n";
		break;
	case 4:
		cout << "show Teacher\n";
		break;
	case 5:
		showTeacherById();
		break;
	case 6:

		break;
	default:
		cout << "Invalid Choise\n";
		break;
	}
}


int main()
{
	bool flag = 0;
	

	while (true)
	{
		ShowSystem();
		cin >> process;
		switch (process)
		{
		case 1:
			showList("student");
			cin >> process;
			switchStudent();
			break;
		case 2:
			showList("course");
			cin >> process;
			switchCourse();
			break;
		case 3:
			showList("teacher");
			cin >> process;
			switchTeacher();
			break;
		case 4: 
			flag = 1;
			break;
		default:
			cout << "Invalid Choise\n";
			break;
		}
		if (flag)
		{
			break;
		}
	}
	
	return 0;
}

