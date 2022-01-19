int main() {
	int i, *const cp = &i;
	int *p1, *const p2 = pl;
	const int ic = 1, &r = ic;
	const int *const p3 = &ic;
	const int *p;

	{
		//a
		i = ic;
	}
	{
		//b
		//p1 = p3; // A value of type const int cannot be assigned to an entity of type int
	}
	{
		//c
		//p1 = &ic; // A value of type const int cannot be assigned to an entity of type int
	}
	{
		//d
		//p3 = &ic; // Cannot assign to const
	}
	{
		//e
		//p2 = p1; // Cannot assign to const
	}
	{
		//f
		//ic = *p3; // Cannot assign to const
	}
}
