#include <iostream>
#include <vector>

using std::vector;
using std::string;

int main() {
	vector<string> v;
	string in;
	while (std::cin >> in)
		v.push_back(in);

	for (string& s : v) {
		for (char& c : s) {
			c = toupper(c);
		}
	}

	for (decltype(v.size()) i = 0; i < v.size(); ++i) {
		if (i % 8 == 0)
			std::cout << std::endl;
		std::cout << v[i] << " ";
	}
		
	return 0;
}