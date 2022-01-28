#include <iostream>
#include <vector>

using std::vector;
using std::string;

int main() {
	vector<string> v;
	string in;
	while (std::cin >> in)
		v.push_back(in);
	return 0;
}