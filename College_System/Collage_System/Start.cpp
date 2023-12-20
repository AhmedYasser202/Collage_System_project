#include "Controller.cpp"

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
	cout << "1- add " << str << "\t\t2- Remove" << str << "\n";
	cout << "3- edit " << str << "\t\t4- show " << str << "\n";
	cout << "5- Exit\n";
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
	int id = studentController.addStudent(std);
	cout << "Successfully add Student with id [" << id << "]\n";
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
	cout << "Successfully add Course with id [" << courseController.addCourse(course) << "]\n";
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
	cout << "Successfully add Teacher with id [" << teacherController.addTeacher(teacher) << "]\n";
}

int process;

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
				
				break;
			default:
				cout << "Invalid Choise\n";
				break;
			}
			break;
		case 2:
			showList("course");
			cin >> process;
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

				break;
			default:
				cout << "Invalid Choise\n";
				break;
			}
			break;
		case 3:
			showList("teacher");
			cin >> process;
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

				break;
			default:
				cout << "Invalid Choise\n";
				break;
			}
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

