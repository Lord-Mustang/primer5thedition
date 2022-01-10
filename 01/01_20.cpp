#include <iostream>
#include "header.h"
#include"Sales_item.h"

#if SWITCH == 0x0120

int main() {
	Sales_item book;
	while (std::cin >> book) {
		std::cout << book << std::endl;
	}
	return 0;
}

#endif // SWITCH == 0x0120
