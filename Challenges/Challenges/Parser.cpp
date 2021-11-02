#include <string>
#include <iostream>
#include <vector>

int main()
{
	std::string word;
	char token;
	void ParseString(std::string word, char token);

	std::cout << "Type in the word or sentence\n";
	std::cin >> word;
	
	std::cout << "Type in the token where you want to split it\n";
	std::cin >> token;


	return 0;
}

void ParseString(std::string word, char token)
{
	
	for (auto it = word.begin(); it <= word.end(); it++)
	{
		if (*it != token)
		{
			std::string partialWord = word.substr(0, token);
			//std::vector<std::string> partialVector(partialWord);
		}
	}
}

