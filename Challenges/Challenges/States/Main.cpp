#include <iostream>
#include <vector>
#include "OptionsState.h"
#include "HelpState.h"
#include "TutorialState.h"
#include "MenuState.h"


int main()
{
	OptionsState optionsState;
	HelpState helpState;
	TutorialState tutorialState;

	bool isGameRunning = true;
	int option;

	std::vector<MenuState*> menu;
	std::cout << "You are in the menu. Where would you like to go?\n";
	while (isGameRunning)
	{
		std::cout << "0.Help\n1.Options\n2.Tutorial\n";
		std::cin >> option;
		
		if (option == 0)
		{
			menu.push_back(&helpState);
		}
		else if (option == 1)
		{
			menu.push_back(&optionsState);
		}
		else if (option == 2)
		{
			menu.push_back(&tutorialState);
		}
		menu[0]->Update();
		menu.clear();
	}

	return 0;
}