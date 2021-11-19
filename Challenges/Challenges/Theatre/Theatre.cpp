#include <iostream>

/*
5. Use a nested for - loop to display the new theatre seating arrangement on - screen and make sure you
clear the screen before.*/

int main()
{
	const int ROW = 10;
	const int SEAT = 10;
	char seating[ROW][SEAT];
	
	int userRow, userSeat;

	std::cout << "Which row (1-10) would you like to book? ";
	std::cin >> userRow;
	std::cout << "\nWhich seat (1-10) would you like to book? ";
	std::cin >> userSeat;

	//takes away 1, because matrices start from (0,0) and seats are counted from (1,1)
	userRow--;
	userSeat--;
	seating[userRow][userSeat] = 'R';

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < SEAT; j++)
		{
			if (i == userRow && j == userSeat)
			{
				seating[i][j] = 'R';
			}
			else
			{
				seating[i][j] = 'A';
			}
			std::cout << seating[i][j];
		}
		std::cout << "" << std::endl;
	}

	return 0;
}