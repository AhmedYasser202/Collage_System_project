#include "Rebo.cpp"

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