int main() {
	int i = 0, &r = i;
	const int ci = i, &cr = ci;

	auto a = r;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	const auto f = ci;
	auto &g = ci;
	//auto &h = 42;
	const auto &j = 42;

	{
		a = 42;
	}
	{
		b = 42;
	}
	{
		c = 42;
	}
	{
		//d = 42; // Cannot assign literal to int pointer
	}
	{
		//e = 42; // Cannot assign literal to int pointer
	}
	{
		//f = 42; // Cannot assign to const
	}
}