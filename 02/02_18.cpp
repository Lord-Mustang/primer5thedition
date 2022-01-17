#include <iostream>

int main() {
	int i1 = 0, i2 = 1;
	int* p = &i1;
	*p = 2;
	std::cout << i1 << std::endl;
	p = &i2;
	std::cout << *p << std::endl;
	return 0;
}