#include <iostream>

int main()
{
	const int numStars = 10;
	const int height = 5;
	const int width = 15;
	const int maxRows = 7;

	void Stars(int numStars);
	void Rectangle(int width, int height);
	void HollowRect(int width, int height);
	void Triangle(int maxRows);
	void Diamond(int maxRows);

	Stars(numStars);
	Rectangle(width, height);
	HollowRect(width, height);
	Triangle(maxRows);
	Diamond(maxRows);

	system("pause");
	return 0;
}

void Stars(int numStars)
{
	for (int i = 0; i < numStars; i++)
	{
		std::cout << "*";
	}
	std::cout << "\n\n";
}

void Rectangle(int width, int height)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
	std::cout << "\n\n";
}

void HollowRect(int width, int height)
{
	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= width; j++)
		{
			//top and bottom lines
			if (i == 1 || i == height)
			{
				std::cout << "*";
			}
			//left and right lines
			else if (j == width || j==1)
			{
				std::cout << "*";
			}
			//empty space
			else
			{
				std::cout << " ";
			}
		}
		std::cout << "\n";
	}
	std::cout << "\n\n\n";
}

void Triangle(int maxRows)
{
	for (int i = 0; i < maxRows; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
	std::cout << "\n\n\n";
}

void Diamond(int maxRows)
{
	for (int i = 0; i < maxRows; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
	for (int i = maxRows-2; i >= 0; i--)
	{
		for (int j = i; j >= 0; j--)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
}