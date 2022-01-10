#include"header.h"
#include <iostream>

#if SWITCH == 0x014

int main() {
	int v1 = 1, v2 = 3;
	std::cout << v1 * v2 << std::endl;
	return 0;
}

#endif // SWITCH == 0x014