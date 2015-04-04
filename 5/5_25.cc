#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	int n1, n2, div;

	while(1)
	{
		try
		{
			cout << "Enter first number: ";
			cin >> n1;
			cout << endl << "Enter second number: ";
			cin >> n2;
		
			if(n2 == 0)
				throw runtime_error("division by zero");
			
			cout << n1 << "/" << n2 << " = " << n1/n2;
		}
		catch(runtime_error err)
		{
			char c;
			cout << "Error: " << err.what() << endl;
			cout << "Want to try again? [y/n]: ";
			cin >> c;

			if(c != 'n')
				continue;
		}

		break;
	}
}