#include <vector>
#include <iostream>

using std::vector;

int main() {
	{// Preferred way
		vector<int> v(10, 42);
		std::cout << v.size() << std::endl;
	}
	{
		vector<int> v{ 42, 42, 42, 42, 42, 42, 42, 42, 42, 42 };
		std::cout << v.size() << std::endl;
	}
	{
		vector<int> v;
		for (int i = 0; i < 10; ++i)
			v.push_back(42);
		std::cout << v.size() << std::endl;
	}
	return 0;
}