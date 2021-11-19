#include <iostream>

int main()
{
	enum numbers
	{
		Zero,
		One,
		Two
	};
	int num = 1;

	if (num == Zero)
	{
		std::cout << "0" << std::endl;
	}
	else if(num == One)
	{
		std::cout << "1" << std::endl;
	}
	else
	{
		std::cout << "2" << std::endl;
	}
	//==================================================

	enum ageEnum
	{
		TwentyFour,
		ThirtyThree,
		FiftyFive
	};
	int age = 33;

	switch (age)
	{
	case TwentyFour:
		std::cout << "You are still very young!" << std::endl;
		break;

	case ThirtyThree:
		std::cout << "You are what you are..." << std::endl;
		break;

	case FiftyFive:
		std::cout << "You are getting on in life" << std::endl;
	}
	//============================================================

	int i = 0;
	while (i < 10)
	{
		//do stuff
		i++;
	}
	//===========================================================

	for (int i = 0; i < 25; i++)
	{
		//do stuff
	}

	return 0;
}