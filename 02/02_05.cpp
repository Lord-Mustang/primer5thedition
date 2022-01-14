#include <string>

int main() {
	char a_char = 'a';
	wchar_t a_wchar = L'a';
	std::string a_str = "a";
	std::wstring a_wstr = L"a"; //wchar_t string

	int b_int = 10;
	unsigned int b_uint = 10u;
	long b_long = 10L;
	unsigned long b_ulong = 10uL;
	unsigned int b_oct = 012;
	unsigned int b_hex = 0xC;

	double c_double = 3.14;
	float c_float = 3.14f;
	long double c_ldouble = 3.14L;

	int d_int = 10;
	unsigned int d_uint = 10u;
	double d_double = 10.;
	double d_double_scientific = 10e-2;

	return 0;
}