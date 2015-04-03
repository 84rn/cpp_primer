#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
	string input;
	vector<string> v;

	while(cin >> input)
		v.push_back(input);

	for(auto &word : v)
		for(auto &c : word)
			c = toupper(c);

	for(decltype(v.size()) i = 0; i < v.size(); i++)
	{
		cout << v[i] << ' ';
		if((i + 1) % 8 == 0)
			cout << endl;
	}

	return 0;
}


