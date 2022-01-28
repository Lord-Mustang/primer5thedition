#include <iostream>
#include <vector>

using std::vector;

int main() {
	vector<int> v;
	int in = 0;
	while (std::cin >> in)
		v.push_back(in);
	return 0;
}