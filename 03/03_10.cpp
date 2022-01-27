#include <iostream>
#include <string>

int main() {
	const std::string s = "Keep out!!";
	std::string result;

	for (decltype(s.size()) i = 0; i < s.size(); ++i) 
		if (!ispunct(s[i]))
			result += s[i];

	std::cout << result << std::endl;
	return 0;
}