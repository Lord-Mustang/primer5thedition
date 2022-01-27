#include <string>
#include <iostream>

int main() {
	std::string string1, string2;
	std::cin >> string1 >> string2;
	if (string1.size() == string2.size())
		std::cout << "Strings are equal" << std::endl;
	else if (string1.size() > string2.size())
		std::cout << "String 1 is longer" << std::endl;
	else
		std::cout << "String 2 is longer" << std::endl;
	return 0;
}