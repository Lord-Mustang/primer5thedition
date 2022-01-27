#include <string>
#include <iostream>

int main() {
	std::string s = "some string";

	for (auto &c : s)
		c = 'X';
	std::cout << s << std::endl;
	return 0;
}
