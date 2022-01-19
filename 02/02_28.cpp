int main() {
	{
		//a
		//int i, *const cp; // Const must be defined
	}
	{
		//b
		//int *p1, *const p2; // Const must be defined
	}
	{
		//c
		//const int ic, &r = ic; // Const must be defined
	}
	{
		//d
		//const int *const p3; // Const must be defined
	}
	{
		//e
		const int *p;
	}
	return 0;
}