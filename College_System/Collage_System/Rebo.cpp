#include "models.cpp"

// static data
class Data
{
public:
	static student students[25];
	static int indexStudent;
	static int idStudent;

	static Course Courses[25];
	static int indexCourse;
	static int idCourse;

	static Teacher Teachers[25];
	static int indexTeacher;
	static int idTeacher;

};

// init static data;
student Data::students[25];
int Data::indexStudent = 0;
int Data::idStudent = 1;

Course Data::Courses[25];
int Data::indexCourse = 0;
int Data::idCourse = 1;

Teacher Data::Teachers[25];
int Data::indexTeacher = 0;
int Data::idTeacher = 1;




//////////////// Student //////////////
// student interface
class studentRebository
{
public:
	virtual int addStudent(student std) = 0;
};

// student impl
class studentRebositoryImpl : public studentRebository
{
private:
	Data data;
public:
	int addStudent(student std)
	{
		if (data.indexStudent == 25)
		{
			return -1;

		}
		else
		{
			std.setId(data.idStudent++);
			data.students[data.indexStudent++] = std;
		}
		return std.getId();
	}

};


//////////////// Teacher //////////////
// Teacher interface
class teacherRebository
{
public:
	virtual int addTeacher(Teacher teacher) = 0;
};

// student impl
class TeacherRebositoryImpl : public teacherRebository
{
private:
	Data data;
public:
	int addTeacher(Teacher teacher)
	{
		if (data.indexTeacher == 25)
		{
			return -1;
		}
		else
		{
			teacher.setId(data.idTeacher++);
			data.Teachers[data.indexTeacher++] = teacher;
		}
		return teacher.getId();
	}
};




//////////////// Course //////////////
// Course interface
class courseRebository
{
public:
	virtual int addCourse(Course course) = 0;
};

// student impl
class CourseRebositoryImpl : public courseRebository
{
private:
	Data data;
public:
	int addCourse(Course course)
	{
		if (data.indexCourse == 25)
		{
			return -1;
		}
		else
		{
			course.setId(data.idCourse++);
			data.Courses[data.indexCourse++] = course;
		}
		return course.getId();
	}
};



