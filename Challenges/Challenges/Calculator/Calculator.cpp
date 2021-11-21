#include <iostream>
#include <string>

float CheckingZero(float num2);
float CheckingCorrectVariable(float num);

int main()
{
	float num1, num2;
	char choice;
	bool isAppRunning = true;

	void Add(float num1, float num2);
	void Subtract(float num1, float num2);
	void Multiply(float num1, float num2);
	void Divide(float num1, float num2);
	void Remainder(float num1, float num2);
	

	while (isAppRunning == true)
	{
		std::cout << "\nType in the first number: ";
		std::cin >> num1;
		num1 = CheckingCorrectVariable(num1);
		

		std::cout << "Type in the second number: ";
		std::cin >> num2;
		num2 = CheckingCorrectVariable(num2);

		std::cout << "What would you like to do with the two numbers?\n1.Add\n2.Subtract\n3.Multiply";
		std::cout <<"\n4.Divide\n5.Remainder\n6.Exit" << std::endl;
		std::cin >> choice;

		while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice != '6')
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
			break;

		case '5':
			Remainder(num1, num2);
			break;

		case '6':
			isAppRunning = false;
			break;
		}
	}
	return 0;
}

void Add(float num1, float num2)
{
	std::cout << num1 + num2;
}

void Subtract(float num1, float num2)
{
	std::cout << num1 - num2;
}

void Multiply(float num1, float num2)
{
	std::cout << num1 * num2;
}

void Divide(float num1, float num2)
{
	std::cout << num1 / CheckingZero(num2);
}

void Remainder(float num1, float num2)
{
	std::cout << "Modulo can only be counted when numbers are integers." << std::endl;
	std::cout << "Integer of " << num1 << " is " << static_cast<int>(num1) << std::endl;
	std::cout << "Integer of " << num2 << " is " << static_cast<int>(num2) << std::endl;
	std::cout << "Answer: " << static_cast<int>(num1) % static_cast<int>(CheckingZero(num2));
}

float CheckingZero(float num2)
{
	float checking = num2;
	while (checking == 0)
	{
		std::cout << "Division by 0 is impossible. Please try again. ";
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cin >> checking;
	}
	return checking;
}

float CheckingCorrectVariable(float num)
{
	float number = num;
	while (std::cin.fail())
	{
		std::cout << "You didn't type a number, please try again. ";
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cin >> number;
	}
	return number;
}