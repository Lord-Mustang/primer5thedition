int main() {
	// Same deduced type
	int i = 9;
	decltype(i) j = 0;
	auto k = i;

	// Different deduced type
	const int ci = 0;
	decltype(ci) y = 0; // const int
	auto x = ci; // int

	return 0;
}