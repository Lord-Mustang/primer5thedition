int main() {
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	auto j = &i;

	const int i = 42; // const int
	auto j = i; // int
	const auto &k = i; // const int
	auto *p = &i; // const int*
}