#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
	string s1, s2;

	getline(cin, s1);
	getline(cin, s2);

	if(s1 == s2)
		cout << "Strings are equal" << endl;
	else if(s1 > s2)
		cout << "First string is larger than the second" << endl;
	else
		cout << "Second string is larger than the first" << endl;

	auto s1_s = s1.size();
	auto s2_s = s2.size();

	if(s1_s == s2_s)
		cout << "Strings are of same length" << endl;
	else if(s1_s < s2_s)
		cout << "First string is shorter than the second" << endl;
	else
		cout << "Second string is shorter than the first" << endl;

	return 0;
}