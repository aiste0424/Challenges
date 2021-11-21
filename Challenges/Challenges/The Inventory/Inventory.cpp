#include <iostream>
#include <list>
#include <string>

int main()
{
	const int vowelsLength = 6;
	std::string start;
	std::string item;
	std::string remove;
	char vowels[vowelsLength] = { 'a', 'e', 'i', 'o', 'u', 'y'};

	//==============================putting items in a list
	std::list<std::string>inventory;
	inventory.push_back("sword");
	inventory.push_back("axe");
	inventory.push_front("chestplate");
	inventory.push_front("dagger");
	auto it = inventory.begin();
	it++;
	it++;
	inventory.insert(it, "knife");
	it++;
	inventory.insert(it, "emerald");
	//==============================
	
	//loops through the items, checks if the word begins with a vowel, assigns A/An, depending on the situation
	for (auto i = inventory.begin(); i != inventory.end(); i++)
	{
		item = *i;
		for (auto j = 0; j < vowelsLength; j++)
		{
			if (item.front() == vowels[j])
			{
				start = "An";
			}
		}
		if (start != "An")
		{
			start = "A";
		}
		std::cout << start << " " << *i << std::endl;
	}
	//===============================finding and removing items
	std::cout << "\n\n=========================\n\n";
	std::cout << "Which item would you like to remove?\n";

	std::cin >> remove;
	auto findingItem = std::find(inventory.begin(), inventory.end(), remove);
	if (remove == *findingItem)
	{
		inventory.remove(remove);
		std::cout << "The item has been removed from the list\n\n";
		std::cout << "Items left in the inventory:\n";
	}
	for (auto it = inventory.begin(); it != inventory.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	return 0;
}