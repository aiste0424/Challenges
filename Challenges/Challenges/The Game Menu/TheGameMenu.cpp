#include <iostream>

int main()
{
	int option;
	bool isAppRunning = true;

	while (isAppRunning)
	{
		std::cout << "Where would you like to go? Choose the corresponding number." << std::endl;
		std::cout << "1.Play\n2.Options\n3.Help\n4.Quit" << std::endl;
		std::cin >> option;

		while (std::cin.fail() || option > 4 || option < 1)
		{
			std::cout << "Not a valid option, please try again" << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cin >> option;
		}

		if (option == 1)
		{
			std::cout << "You are now playing the game.";
		}
		else if (option == 2)
		{
			std::cout << "You are now in the options section.";
		}
		else if (option == 3)
		{
			std::cout << "You are now in the help section.";
		}
		else
		{
			isAppRunning = false;
			std::cout << "You have quit the application.";
		}
	}
	
	return 0;
}