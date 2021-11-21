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
	House *housePointer = nullptr;
	housePointer = new House;

	housePointer->hasPool = true;
	housePointer->totalPeople = 10;
	housePointer->totalRooms = 15;

	delete housePointer;
	//=================================END TASK 1

	std::string yesNo;
	int deleteHouse;
	int people;
	int rooms;

	//===========================================================START TASK 2
	House houses[totalHouses];

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

	House* housesPtr[totalHouses];

	for (auto i = 0; i < totalHouses; i++)
	{
		housesPtr[i] = new House;
	}
	
	for (int i = 0; i < totalHouses; i++)
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
	}

	//printing the list on the screen
	for (int i = 0; i < totalHouses; i++)
	{
		if (housesPtr[i]->hasPool)
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
	while (deleteHouse < 0 || deleteHouse > totalHouses)
	{
		std::cout << "The number you entered is out of limits, please try again. ";
		std::cin >> deleteHouse;
	}

	std::cout << "House number " << deleteHouse << " has been successfully deleted.";
	delete housesPtr[deleteHouse];
	housesPtr[deleteHouse] = nullptr;

	return 0;
}