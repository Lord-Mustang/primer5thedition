#include"header.h"
#include<iostream>

#if SWITCH == 0x018

int main() {
	// std::cout << "/*";
	// std::cout << "*/";
	// std::cout << /* "*/" */;
	// std::cout << /*  "*/" /*  "/*" */;

	std::cout << "/*";
	std::cout << "*/";
	std::cout << "*/";
	std::cout << "*/" << "/*";
	return 0;
}

#endif // SWITCH == 0x018
