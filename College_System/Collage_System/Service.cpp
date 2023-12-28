#include "Validation.cpp"
/////////////// Student ////////////////
//// Student service interface
class StudentService
{
public:
	virtual int addStudent(student std) = 0;
	virtual student getStudentByID(int id) = 0;

	
};
////// Student service Impl
class StudentServiceImpl
{
private:
	studentRebositoryImpl StudentRebository;
	studentValidation studentValidation;
	ValidationService validationService;
	student studentResult;
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

	student getStudentByID(int id)
	{
		studentResult = StudentRebository.getStudentByID(id);
		if (studentResult.getId() == -1)
		{
			cout << "Student with id [" << id << "] Not Exist\n";
		}
		return studentResult;
	}
};



/////////////////// Course ///////////////////////
///// Course service interface
class CourseService
{
public:
	virtual int addCourse(Course course) = 0;
	virtual Course getCourseByID(int id) = 0;

};
// Course Service Impl
class CourseServiceImpl
{
private:
	CourseRebositoryImpl CourseRebository;
	CourseValidation courseValidation;
	ValidationService validationService;
	Course CourseResult;
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

	Course getCourseByID(int id)
	{
		CourseResult = CourseRebository.getCourseByID(id);
		if (CourseResult.getId() == -1)
		{
			cout << "Course with id [" << id << "] Not Exist\n";
		}
		return CourseResult;
	}
};

////////////////// Teacher ////////////////
///// Teacher service interface
class TeacherService
{
public:
	virtual int addTeacher(Teacher teacher) = 0;
	virtual Teacher getTeacherByID(int id) = 0;

};
///// Teacher servise Impl
class TeacherServiceImpl
{
private:
	TeacherRebositoryImpl TeacherRebository;
	TeacherValidation teacherValidation;
	ValidationService validationService;
	Teacher TeacherResult;
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

	Teacher getTeacherByID(int id)
	{
		TeacherResult = TeacherRebository.getTeacherByID(id);
		if (TeacherResult.getId() == -1)
		{
			cout << "Course with id [" << id << "] Not Exist\n";
		}
		return TeacherResult;
	
	}
};