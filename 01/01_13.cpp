#include"header.h"
#include<iostream>

#if SWITCH == 0x0113

int main() {
	int sum = 0;
	for (int val = 50; val < 100; ++val) {
		sum += val;
	}
	std::cout << "Sum of 50 to 100 exclusive is " << sum << std::endl;

	int sub = 10;
	for (int sub = 10; sub >= 0; --sub) {
		std::cout << sub << std::endl;
	}
	return 0;
}

#endif // SWITCH == 0x0113
