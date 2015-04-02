#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;

	if(getline(cin, str))
	{
		cout << "Original: " << str << endl;

		for(auto &c : str)
			c = 'X';

		cout << "After for: " << str << endl;
	}

	return 0;
}

