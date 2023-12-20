#include <iostream>
using namespace std;


// model ShareData
class ShareData
{
private:
	int id;
	string name;
public:
	// setter
	void setId(int id)
	{
		this->id = id;
	}
	void setName(string name)
	{
		this->name = name;
	}
	// getter
	int getId()
	{
		return id;
	}
	string getName()
	{
		return name;
	}
};


// model BaseEntity
class BaseEntity : public ShareData
{
private:
	int age;
	string phoneNumber;
public:
	// setter
	
	void setAge(int age)
	{
		this->age = age;
	}
	void setPhoneNumber(string phoneNumber)
	{
		this->phoneNumber = phoneNumber;
	}

	// Getter
	int setAge()
	{
		return age;
	}
	string getPhoneNumber()
	{
		return phoneNumber;
	}
};

// model teacher
class Teacher : public BaseEntity
{
private:
	double salary;
	int studentIds[5];
public:
	// setter
	void setSalary(double salary)
	{
		this->salary = salary;
	}

	void setStudentIds(int studentIds[5])
	{
		for (int i = 0;i < sizeof(studentIds) / sizeof(studentIds[0]);i++)
			this->studentIds[i] = studentIds[i];
	}
	// Getter
	double getSalary()
	{
		return salary;
	}

	int* getStudentIds()
	{
		return studentIds;
	}
};


// model course
class Course : public ShareData
{
private:
	double hour;
	int studentIds[5];
public:
	// setter
	void setHour(double hour)
	{
		this->hour = hour;
	}

	void setStudentIds(int studentIds[5])
	{
		for (int i = 0;i < sizeof(studentIds) / sizeof(studentIds[0]);i++)
			this->studentIds[i] = studentIds[i];
	}

	// getter 
	double getHour()
	{
		return hour;
	}

	int* getStudentIds()
	{
		return studentIds;
	}
};


// model student
class student : public BaseEntity
{
private:
	double gpa;
	Teacher teachers[5];
	Course courses[5];
public:
	// setter
	void setGpa(double gpa)
	{
		this->gpa = gpa;
	}
	
	void setTeachers(Teacher teachers[5])
	{
		for (int i = 0;i < sizeof(teachers) / sizeof(teachers[0]);i++)
		{
			this->teachers[i] = teachers[i];
		}
	}

	void setCourses(Course courses[5])
	{
		for (int i = 0;i < sizeof(courses) / sizeof(courses[0]);i++)
		{
			this->courses[i] = courses[i];
		}
	}


	// getter
	double getGpa()
	{
		return gpa;
	}
	
	Teacher* getTeachers()
	{
		return teachers;
	}
	Course* getCourses()
	{
		return courses;
	}
};



int main()
{