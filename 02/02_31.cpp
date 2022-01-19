int main() {
	int i;

	const int v2 = 0;
	int v1 = v2;
	int *p1 = &v1, &r1 = v1;
	const int *p2 = &v2, *const p3 = &i, &r2 = v2;

	{
		r1 = v2; // Top-level const is ignored
	}
	{
		//p1 = p2; // p2 has a low-level const
	}
	{
		p2 = p1; // Can assign to a top-level const
	}
	{
		p1 = p3; // Cannot assign top- and low-level const to nonconst
	}
	{
		p2 = p3; // Can assign top- and low-level const to low-level const
	}
	return 0;
}