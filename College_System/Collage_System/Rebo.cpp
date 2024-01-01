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
	virtual student getStudentByID(int id) = 0;
};

// student impl
class studentRebositoryImpl : public studentRebository
{
private:
	
	student Invalidstd;
public:
	int addStudent(student std)
	{
		if (Data::indexStudent == 25)
		{
			return -1;

		}
		else
		{
			std.setId(Data::idStudent++);
			Data::students[Data::indexStudent++] = std;
		}
		return std.getId();
	}
	student getStudentByID(int id)
	{
		// return data.students[id-1];
		for (int i = 0; i < Data::indexStudent; i++)
		{
			if (Data::students[i].getId() == id)
			{
				return Data::students[i];
			}
		}

		Invalidstd.setId(-1);
		return Invalidstd;
	}

};


//////////////// Teacher //////////////
// Teacher interface
class teacherRebository
{
public:
	virtual int addTeacher(Teacher teacher) = 0;
	virtual Teacher getTeacherByID(int id) = 0;

};

// student impl
class TeacherRebositoryImpl : public teacherRebository
{
private:
	Teacher InvalidTeacher;
public:
	int addTeacher(Teacher teacher)
	{
		if (Data::indexTeacher == 25)
		{
			return -1;
		}
		else
		{
			teacher.setId(Data::idTeacher++);
			Data::Teachers[Data::indexTeacher++] = teacher;
		}
		return teacher.getId();
	}

	Teacher getTeacherByID(int id)
	{
		for (int i = 0; i < Data::indexTeacher; i++)
		{
			if (Data::Teachers[i].getId() == id)
			{
				return Data::Teachers[i];
			}
		}

		InvalidTeacher.setId(-1);
		return InvalidTeacher;
	}
};




//////////////// Course //////////////
// Course interface
class courseRebository
{
public:
	virtual int addCourse(Course course) = 0;
	virtual Course getCourseByID(int id) = 0;
};

// student impl
class CourseRebositoryImpl : public courseRebository
{
private:
	Course InvalidCourse;
public:
	int addCourse(Course course)
	{
		if (Data::indexCourse == 25)
		{
			return -1;
		}
		else
		{
			course.setId(Data::idCourse++);
			Data::Courses[Data::indexCourse++] = course;
		}
		return course.getId();
	}

	Course getCourseByID(int id)
	{
		for (int i = 0; i < Data::indexCourse; i++)
		{
			if (Data::Courses[i].getId() == id)
			{
				return Data::Courses[i];
			}
		}

		InvalidCourse.setId(-1);
		return InvalidCourse;
	}
};



