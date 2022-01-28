#include <vector>
#include <string>

using std::vector;
using std::string;

int main() {
	vector<int> v1; // n = 0
	vector<int> v2(10); // n = 10
	vector<int> v3(10, 42); // n = 10, val = 42
	vector<int> v4{ 10 }; // n = 1, val = 10
	vector<int> v5{ 10, 42 }; // n = 2, val = 10, 42
	vector<string> v6{ 10 }; // n = 10, val = empty string
	vector<string> v7{ 10, "hi" }; // n = 10, val = "hi"

	return 0;
}