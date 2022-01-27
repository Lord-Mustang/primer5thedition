#include <string>
#include <iostream>

void read_line() {
	std::string line;
	while (std::getline(std::cin, line))
		std::cout << line << std::endl;
}

void read_word() {
	std::string word;
	while (std::cin >> word)
		std::cout << word << std::endl;
}

int main() {
	//read_line();
	read_word();
	return 0;
}