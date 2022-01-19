int main() {
	{	//a
		//int i = -1, &r = 0; // Initial value of reference to non-const cannot be a literal
	}
	{	//b
		int i2;
		int *const p2 = &i2;
	}
	{
		//c
		const int i = -1, &r = 0;
	}
	{
		//d
		int i2;
		const int *const p3 = &i2;
	}
	{
		//e
		int i2;
		const int *p1 = &i2;
	}
	{
		//f
		//const int &const r2; // A const must also be defined when declare
	}
	{
		//g
		int i;
		const int i2 = i, &r = 1;
	}
	return 0;
}