#include <iostream>
#include <string>

int main() {
	std::string concat_str, input_str;
	while (std::cin >> input_str)
		concat_str += (" " + input_str);
	std::cout << concat_str << std::endl;

	return 0;
}