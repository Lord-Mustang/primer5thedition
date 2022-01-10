#include"header.h"
#include<iostream>
#include"Sales_item.h"

#if SWITCH == 0x0120

int main() {
	Sales_item book;
	while (std::cin >> book) {
		std::cout << book << std::endl;
	}
}

#endif // SWITCH == 0x0120
