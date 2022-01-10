#include <iostream>
#include "header.h"

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
