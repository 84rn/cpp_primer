#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string input;

	while(getline(cin, input))
	{
		for(auto &c : input)
			if(!ispunct(c))
				cout << c;

		cout << endl;
	}

	return 0;
}

