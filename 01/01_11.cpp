#include <iostream>
#include "header.h"

#if SWITCH == 0x0111

int main() {
	int v1 = 0, v2 = 0;
	std::cout << "Input two numbers: " << std::endl;
	std::cin >> v1 >> v2;
	while (v1 <= v2) {
		std::cout << v1 << std::endl;
		++v1;
	}
	return 0;
}

#endif // SWITCH == 0x0111
