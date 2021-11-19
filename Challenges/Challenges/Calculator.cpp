#include <iostream>
#include <string>

int main()
{
	int num1, num2;
	char choice;
	bool isAppRunning = true;

	void Add(int num1, int num2);
	void Subtract(int num1, int num2);
	void Multiply(int num1, int num2);
	void Divide(int num1, int num2);

	while (isAppRunning == true)
	{
		std::cout << "\nType in the first number: ";
		std::cin >> num1;
		std::cout << "Type in the second number: ";
		std::cin >> num2;

		std::cout << "What would you like to do with the two numbers?\n1.Add\n2.Subtract\n3.Multiply\n4.Divide" << std::endl;
		std::cin >> choice;

		while (choice != '1' && choice != '2' && choice != '3' && choice != '4')
		{
			std::cout << "The option is not valid. Please try again." << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cin >> choice;
		}
		switch (choice)
		{
		case '1':
			Add(num1, num2);
			break;
		case '2':
			Subtract(num1, num2);
			break;
		case '3':
			Multiply(num1, num2);
			break;
		case '4':
			Divide(num1, num2);
		}

	}
	


	return 0;
}

void Add(int num1, int num2)
{
	std::cout << num1 + num2;
}

void Subtract(int num1, int num2)
{
	std::cout << num1 - num2;
}

void Multiply(int num1, int num2)
{
	std::cout << num1 * num2;
}

void Divide(int num1, int num2)
{
	std::cout << num1 / num2;
}