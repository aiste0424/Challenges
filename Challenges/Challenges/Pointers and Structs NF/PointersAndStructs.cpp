#include <iostream>
#include <string>

int main()
{
	struct House
	{
		bool hasPool;
		int totalRooms;
		short totalPeople;
	};
	const int totalHouses = 2;
	//================================START TASK 1
	House *housePointer1 = nullptr;
	House *housePointer2 = new House;

	housePointer2->hasPool = true;
	housePointer2->totalPeople = 10;
	housePointer2->totalRooms = 15;

	delete housePointer1;
	delete housePointer2;
	//=================================END TASK 1
	std::string yesNo;
	House houses[totalHouses];
	House* housesPtr[totalHouses];

	int deleteHouse;
	int people;
	int rooms;
	//===========================================================START TASK 2
	/*for (int i = 0; i < totalHouses; i++)
	{
		std::cout << "Does the house have a pool? ";
		std::cin >> yesNo;
		if (yesNo == "yes")
		{
			houses[i].hasPool = true;
		}
		else
		{
			houses[i].hasPool = false;
		}
		std::cout << "\nHow many people does the house contain? ";
		std::cin >> people;
		houses[i].totalPeople = people;
		std::cout << "\nHow many rooms does the house have? ";
		std::cin >> rooms;
		houses[i].totalRooms = rooms;
		std::cout << "\n";
	}
	for (int i = 0; i < totalHouses; i++)
	{
		if (houses[i].hasPool == true)
		{
			std::cout << "House number " << i + 1 << " has a pool" << std::endl;
		}
		else
		{
			std::cout << "House number " << i + 1 << " does not have a pool" << std::endl;
		}
		std::cout << "House number " << i + 1 << " can fit " << houses[i].totalPeople << " people in total" << std::endl;
		std::cout << "House number " << i + 1 << " has " << houses[i].totalRooms << "rooms in total" << std::endl;
	}*/
	//===================================================================END TASK 2, START TASK 3
	
	//instanstiating pointer objects
	for (auto i = 0; i < totalHouses; i++)
	{
		housesPtr[i] = new House[i];
	}
	
	//asking user input and assigning data
	/*for (int i = 0; i < totalHouses; i++)
	{
		std::cout << "Does the house have a pool? ";
		std::cin >> yesNo;
		if (yesNo == "yes")
		{
			housesPtr[i]->hasPool = true;
		}
		else
		{
			housesPtr[i]->hasPool = false;
		}
		std::cout << "\nHow many people does the house contain? ";
		std::cin >> people;
		housesPtr[i]->totalPeople = people;
		std::cout << "\nHow many rooms does the house have? ";
		std::cin >> rooms;
		housesPtr[i]->totalRooms = rooms;
		std::cout << "\n";
	}*/
	//printing the list on the screen
	for (int i = 0; i < totalHouses; i++)
	{
		if (housesPtr[i]->hasPool == true)
		{
			std::cout << "House number " << i + 1 << " has a pool" << std::endl;
		}
		else
		{
			std::cout << "House number " << i + 1 << " does not have a pool" << std::endl;
		}
		std::cout << "House number " << i + 1 << " can fit " << housesPtr[i]->totalPeople << " people in total" << std::endl;
		std::cout << "House number " << i + 1 << " has " << housesPtr[i]->totalRooms << "rooms in total" << std::endl;
	}

	std::cout << "Which house would you like to delete? ";
	std::cin >> deleteHouse;

	
	delete housesPtr[deleteHouse];
	housesPtr[deleteHouse] = nullptr;

	return 0;
}