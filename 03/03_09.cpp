#include <iostream>
#include <string>

int main() {
	const std::string s = "Keep out!";
	std::cout << s[0] << std::endl; // Out of bounds, since string is empty
	return 0;
}