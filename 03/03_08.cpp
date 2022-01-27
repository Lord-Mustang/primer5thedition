#include <string>
#include <iostream>

void for_loop() {
	std::string s = "some string";

	for (decltype(s.size()) i = 0; i < s.size(); ++i)
		s[i] = 'X';
	std::cout << s << std::endl;
}

void while_loop() {
	std::string s = "some string";

	decltype(s.size()) i = 0;
	while (i < s.size()) {
		s[i] = 'X';
		++i;
	}
	std::cout << s << std::endl;
}

int main() {
	for_loop();
	while_loop();
	return 0;
}
