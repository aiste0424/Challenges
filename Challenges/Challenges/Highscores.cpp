#include <map>
#include <iostream>
#include <string>

int main()
{
	//======================adding data into a map
	std::map<std::string, int>highScoreTable;
	std::string name;
	highScoreTable["Viego"] = 100;
	highScoreTable["Kayn"] = 150;
	highScoreTable["Sett"] = 200;
	highScoreTable["Kha'Zix"] = 250;
	highScoreTable["Janna"] = 300;
	
	for (auto it = highScoreTable.begin(); it != highScoreTable.end(); it++)
	{
		std::cout << "Name: " << it->first << ", HighScore: " << it->second << std::endl;
	}

	highScoreTable["Vayne"] = 170;
	highScoreTable.erase("Kha'Zix");
	std::cout << "\n\n\n======================================\n\n\n";
	//updated map with new data
	for (auto it = highScoreTable.begin(); it != highScoreTable.end(); it++)
	{
		std::cout << "Name: " << it->first << ", HighScore: " << it->second << std::endl;
	}

	std::cout << "Type in a name to find out their highscore: ";
	std::cin >> name;

	//looking for name, if there's no name, another message
	auto findName = highScoreTable.find(name);
	if (findName == highScoreTable.end())
	{
		std::cout << "\nThe name does not exist\n";
	}
	else
	{
		std::cout << "The highscore for " << findName->first << " is " << findName->second << std::endl;
	}

	return 0;
}