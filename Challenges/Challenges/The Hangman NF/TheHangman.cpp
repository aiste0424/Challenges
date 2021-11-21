#include <iostream>
#include <string>

int main()
{
	std::cout << "Welcome to Hangman! Guess the word one letter at a time" << std::endl;
	std::cout << "You have 10 lives. Every incorrect guess will cost you one life. Good luck!" << std::endl;

	char word[] = "wholeheartedly";
	
	
	int wordLength = 14;
	char guess;
	int lives = 10;
	bool isGameRunning = true;
	std::string underscore = std::string(wordLength, '_');

	
	

	for (int i = 0; i < wordLength; i++)
	{
		std::cout << "_ ";
	}
	std::cout << "\n\n\n" << std::endl;

	while (isGameRunning)
	{
		std::cout << "Guess a letter: ";
		std::cin >> guess;

		for (int i = 0; i < wordLength; i++)
		{
			if (word[i] == guess)
			{
				underscore[i] = word[i];
			}
			
		}
		std::cout << underscore << std::endl;
		std::cout << "Life counter: " << lives << std::endl;
	}

	return 0;
}