int main() {
	int i;

	const int v2 = 0; // Top-level const
	int v1 = v2; // Nonconst
	int *p1 = &v1, &r1 = v1; /*
							 p1 = Nonconst
							 r1 = Nonconst
							 */
	const int *p2 = &v2, *const p3 = &i, &r2 = v2; /* 
												   p2 = low-level const
												   p3 = top and low-level const
												   r2 = low-level const
												   */
	return 0;
}