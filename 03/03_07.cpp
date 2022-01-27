// Nothing would change, since the char is simply a copy.

#include <string>
#include <iostream>

int main() {
	std::string s = "some string";

	for (char c : s)
		c = 'X';
	std::cout << s << std::endl;
	return 0;
}
