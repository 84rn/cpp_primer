#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str, copy;
	decltype(copy.size()) i;

	if(getline(cin, str))
	{
		cout << "Original: " << str << endl;
		copy = str;

		for(i = 0; i < copy.size(); i++)
			copy[i] = 'X';

		cout << "After for: " << copy << endl;

		copy = str;
		i = 0;

		while(i < copy.size())
			copy[i++] = 'X';

		cout << "After while: " << copy << endl;

	}

	return 0;
}

