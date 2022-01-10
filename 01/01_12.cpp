#include <iostream>
#include "header.h"

#if SWITCH == 0x0112

int main() {
	// Add up all the values between -100 and 100. The final value will be identical to the starting value.
	int sum = 0;
	for (int i = -100; i <= 100; ++i) {
		sum += i;
	}
	std::cout << sum << std::endl;
	return 0;
}

#endif // SWITCH == 0x0112