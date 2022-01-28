#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;

void print_vector_int(vector<int>& v) {
	std::cout << "Size: " << v.size() << std::endl;
	for (int& i : v) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

void print_vector_str(vector<string>& v) {
	std::cout << "Size: " << v.size() << std::endl;
	for (string& s : v) {
		std::cout << s << " ";
	}
	std::cout << std::endl;
}

int main() {
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10, 42 };
	vector<string> v6{ 10 }; 
	vector<string> v7{ 10, "hi" };

	print_vector_int(v1);
	print_vector_int(v2);
	print_vector_int(v3);
	print_vector_int(v4);
	print_vector_int(v5);
	print_vector_str(v6);
	print_vector_str(v7
	);
	return 0;
}