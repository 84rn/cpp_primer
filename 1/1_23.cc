#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item item, prev;
	
	if(cin >> item)
	{
		int num = 1;
		prev = item;
		
		while(cin >> item)
		{
			if(item.isbn() == prev.isbn())
				num++;
			else
			{
				cout << prev.isbn() << " occurs " << num << " times." << endl;
				prev = item;
				num = 1;
			}
		}
		
		cout << prev.isbn() << " occurs " << num << " times." << endl;
	}
	return 0;
}