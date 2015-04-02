#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
	string sum(""), input;

	while(getline(cin, input))
	{
		sum += input;
	}

	cout << sum << endl;

	sum = "";
	cin.clear();

	while(getline(cin, input))
	{
		sum += input + ' ';
	}

	cout << sum << endl;

	return 0;
}