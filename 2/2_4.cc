#include <iostream>
#include <climits>

#define PRINT_EXPR(x) cout << "Expression " #x " = " << x << endl

using namespace std;

int main()
{
	unsigned u = 10, u2 = 42;
	cout << "UINT_MAX: " << UINT_MAX << endl;
	cout << "\nunsigned u = 10, u2 = 42" << endl;
	PRINT_EXPR(u2 - u);
	PRINT_EXPR(u - u2);
	
	int i = 10, i2 = 42;
	cout << "\nint i = 10, i2 = 42" << endl;
	PRINT_EXPR(i2 - i);
	PRINT_EXPR(i - i2);
	
	PRINT_EXPR(i - u);
	PRINT_EXPR(u - i);
	
	
	return 0;
}
	