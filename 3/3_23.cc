#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int input;
	vector<int> v(10);

	srand(time(NULL));

	for(auto &i : v)
		i = rand() % 100;

	cout << "Original: ";
	for(auto i : v)
		cout << i << ' ';
	cout << endl;

	for(auto i = v.begin(); i != v.end(); i++)
	{
		*i *= 2;
	}
	
	cout << "Multiplied: ";
	for(auto i : v)
		cout << i << ' ';
	cout << endl;


	return 0;
}


