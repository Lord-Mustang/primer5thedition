#include"header.h"
#include<iostream>

#if SWITCH == 0x019

int main() {
	int sum = 0, val = 50;
	while (val < 100) {
		sum += val;
		++val;
	}
	std::cout << "Sum of 50 to 100 exclusive is " << sum << std::endl;
	return 0;
}

#endif // SWITCH == 0x019
