/* Yes.
 * The type is const char&
*/
#include <string>
#include <iostream>

int main() {
	const std::string s = "Keep out!";
	for (auto &c : s)
		std::cout << c << std::endl;
	return 0;
}