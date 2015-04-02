#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item item1, item2;
	
	if(cin >> item1 >> item2)
	{
		cout << "Item 1: " << item1 << endl;
		cout << "Item 2: " << item2 << endl;
		cout << "Sum: " << item1 + item2 << endl;
	}
		
	return 0;
}