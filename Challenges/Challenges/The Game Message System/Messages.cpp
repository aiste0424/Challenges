#include <deque>
#include <string>
#include <iostream>

int main()
{
	/*1. Create a messaging system using a deque.The container should add
	std::string messages to the backand process them from the front.
	2. Pressing a key should process the next message from the front of the deque.
	3. Once the messages are removed from the front, they should be displayed.
	4. Incoming messages should be created randomly, using a set of pre - defined ones.
	5. For example, create messages along the lines of Player has joined, Player has left, Player 2 has died, etc.*/

	std::deque<std::string> messages;
	int next;
	messages.push_back("Player 1 has entered the chat");
	messages.push_back("Player 2 has entered the chat");
	messages.push_back("Player 1 is typing...");
	messages.push_back("Player 2 is typing...");
	messages.push_back("Player 1 has left the chat");
	messages.push_back("Player 2 has left the chat");

	for (auto it = messages.begin(); it != messages.end(); it++)
	{
		std::cout << "Type in 1 for the next message: ";
		std::cin >> next;
		if (next == 1)
		{
			std::cout << *it << std::endl;
		}
	}



	return 0;
}