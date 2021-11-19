#include <iostream>

/*
3. Write a function called ShowMap() which displays the playing field :void ShowMap();

7. Write the symbol to the correct position within the array.
8. Write a function called CheckWin() which checks if the current player has won the game.
9. Write a function called PlayGame() which internally invokes ShowMap() and SetNewPosition().
10. Make sure to call GenerateMap() and PlayGame() in main.cpp.*/

int main()
{
	char matrix[3][3];
	char player1 = 'X';
	char player2 = 'O';
	char currentPlayer;

	int row, column;
	
	bool isPlayer1Active;

	void SetNewPosition(int row, int column);
	void GenerateMap(char matrix[3][3]);
	void ShowMap();
	void CheckWin();

	std::cout << "Which row would you like to use? ";
	std::cin >> row;
	std::cout << "\nWhich column would you like to use? ";
	std::cin >> column;

	GenerateMap(matrix);
	SetNewPosition(row, column);

	return 0;
}

void GenerateMap(char matrix[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] = '\0';
		}
	}
}

void ShowMap()
{
}

void SetNewPosition(int row, int column)
{
}

void CheckWin()
{

}