#include <iostream>

using namespace std;

int main() 
{
	int number = 0;
	cin >> number;
	while (number != -1) 
	{
	
	if (number % 2 == 0)
		cout << "EVEN" << endl;
	else 
		cout << "ODD" << endl;
	cin >> number;
	}
	return 0;
}
