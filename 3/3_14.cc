#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int input;
	vector<int> v;

	while(cin >> input)
		v.push_back(input);

	cout << "Printing vector: " << endl;

	for(auto i : v)
		cout << i << endl;
	
	return 0;
}


