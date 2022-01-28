#include <vector>

using std::vector;

int main() {
	{// Illegal
		//vector<int> ivec(1);
		//ivec[0] = 42;
	}
	{
		vector<int> ivec(1);
		ivec[0] = 42;
	}
	return 0;
}