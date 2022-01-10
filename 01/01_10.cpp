#include"header.h"
#include<iostream>

#if SWITCH == 0x0110

int main() {
	int sub = 10;
	while (sub >= 0) {
		std::cout << sub << std::endl;
		--sub;
	}
	return 0;
}

#endif // SWITCH == 0x0110
