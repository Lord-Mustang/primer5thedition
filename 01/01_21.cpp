#include <iostream>
#include "header.h"
#include "Sales_item.h"

#if SWITCH == 0x0121

int main() {
	Sales_item item1, item2;
	//std::cin >> item1 >> item2;
	std::cout << item1 + item2 << std::endl;
	return 0;
}

#endif // SWITCH == 0x0121