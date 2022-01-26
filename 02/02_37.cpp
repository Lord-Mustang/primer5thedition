int main() {
	int a = 3, b = 4; // int a, int b
	decltype(a) c = a; // int c, int a
	decltype(a = b) d = a; // int& d
	return 0;
}