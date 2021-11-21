#include <string>
#include <vector>
#include <sstream>
#include <iostream>

int main()
{
	char token;
	std::string word1;
	std::vector<std::string> segments;
	void ParseString(std::string word, char token, std::vector<std::string> segments);

	std::cout << "Type in the word or sentence\n";
	std::cin >> word1;
	while (word1.empty())
	{
		std::cout << "The string is empty, please try again. ";
		std::cin >> word1;
	}
	
	std::cout << "Type in the token where you want to split it\n";
	std::cin >> token;

	ParseString(word1, token, segments);

	return 0;
}

void ParseString(std::string word, char token, std::vector<std::string> segments)
{
	std::string substring;
	std::stringstream wordStream;
	wordStream = static_cast<std::stringstream>(word);
	
	//getline reads characters from an input stream and places them into a string
	//it takes a stringstream, a string variable where to put the split words and a char
	//where to split the word.
	while (std::getline(wordStream, substring, token))
	{
		segments.push_back(substring);
		std::cout << "Substrings: " << substring << std::endl;
	}
}

