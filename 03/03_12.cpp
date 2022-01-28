#include <vector>
#include <string>

using std::vector;
using std::string;

int main() {
	{//a
		vector<vector<int> > ivec; // Initializes an empty vector of int vectors.
	}
	{//b
		//vector<string> svec = ivec; // Cannot asign vector<vector<int> > to vector<string>.
	}
	{//c
		vector<string> svec(10, "null"); // Initializes a vector with 10x string "null".
	}
	return 0;
}