#include <string>
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	string s;

	if(getline(cin, s))
	{
		for(auto &c : s)
		{
			c = toupper(c);
		}

		cout << s << endl;
	}
	
	return 0;
}
