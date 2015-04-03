#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int input;
	vector<int> v;

	while(cin >> input)
		v.push_back(input);

	for(decltype(v.size()) i = 0; i < v.size() - 1; i++)
	{
		cout << v[i] + v[i + 1] << endl;
	}

	for(decltype(v.size()) i = 0, j = v.size() - 1; i < j; i++, j--)
	{
		cout << v[i] + v[j] << endl;
	}

	return 0;
}


