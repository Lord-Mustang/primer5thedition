#include"header.h"
#include<iostream>

#if SWITCH == 0x0119

int main() {
	int v1 = 0, v2 = 0;
	std::cout << "Input two numbers: " << std::endl;
	std::cin >> v1 >> v2;
	if (v1 < v2) {
		while (v1 <= v2) {
			std::cout << v1 << std::endl;
			++v1;
		}
	}
	else
		std::cout << "First number not smaller than second number" << std::endl;
	return 0;
}

#endif // SWITCH == 0x0119