#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
	string input;

	if(argc != 2)
	{
		std::cerr << "Use l as first parameter to read lines, or w to read words" << endl;
		return 1;
	}

	if(argv[1][0] == 'l')
	{
		while(getline(cin, input))
			cout << input << endl;

	}
	else if(argv[1][0] == 'w')
	{
		while(cin >> input)
			cout << input << endl;
	}

	return 0;
}