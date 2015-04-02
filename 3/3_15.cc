#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string input;
	vector<string> v;

	while(getline(cin, input))
		v.push_back(input);

	cout << "Printing vector: " << endl;

	for(auto i : v)
		cout << i << endl;
	
	return 0;
}


