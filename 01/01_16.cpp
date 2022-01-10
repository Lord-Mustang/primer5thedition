#include <iostream>
#include "header.h"

#if SWITCH == 0x0116

int main() {
	int sum = 0, val = 0;
	while (std::cin >> val) {
		sum += val;
	}
	std::cout << sum << std::endl;
	return 0;
}

#endif //SWITCH == 0x0116

