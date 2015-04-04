#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;
auto func() -> vector<string>
{
	return {"Raz", "Dwa", "Trzy"};
}

int main()
{
	auto v = func();

	cout << "Vector size (should be 3):" << v.size() << endl;
	cout << "Vector elements: ";

	for(auto i : v)
		cout << i << ' ';

	return EXIT_SUCCESS;
}