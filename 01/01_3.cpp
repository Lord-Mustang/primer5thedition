#include <iostream>
#include "header.h"

#if SWITCH == 0x013

int main() {
	std::cout << "Hello, World" << std::endl;
	return 0;
}

#endif // SWITCH == 0x013