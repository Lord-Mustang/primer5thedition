#include <vector>
#include <iostream>

using std::vector;

void print_sum_adj() {
	vector<int> v;
	int in;
	while (std::cin >> in)
		v.push_back(in);

	for (decltype(v.size()) i = 1; i < v.size(); ++i) {
		std::cout << v[i] + v[i - 1] << " ";
	}
}

void print_sum_firstlast() {
	vector<int> v;
	int in;
	while (std::cin >> in)
		v.push_back(in);

	for (decltype(v.size()) i = 0; i < v.size(); ++i) {
		std::cout << v[i] + v[v.size()-1-i] << " ";
	}
}

int main() {
	//print_sum_adj();
	print_sum_firstlast();

	return 0;
}