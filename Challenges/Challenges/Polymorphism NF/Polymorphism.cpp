#include "Player.h"
#include "Elf.h"
#include "Orc.h"
#include "Human.h"
#include <string>
#include <iostream>

int main()
{
	Elf elf;
	Human human;
	Orc orc;
	
	bool isGameRunning = true;

	std::string race;
	std::cout << "Hello Player 1. Which race would you like to choose? Choose between elf, human or orc";
	std::cin >> race;
	
	
	while (isGameRunning == true)
	{
		std::cout << "You are attacking. ";

	}

	
	return 0;
}