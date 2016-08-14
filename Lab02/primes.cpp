#include <iostream>

using namespace std;

int main() 
{	
	int x = 0;
	bool prime;
	int max;	
	cin >> max;
	int primes = 0;
	cout << 2 << endl;
	for (int number = 3; number < max; number++)
	{
		for (int i = 2; i < number; i++)		//if the number has a remainder for any number up to max then it isnt prime
		{
			if (number % i == 0)
			{
				x= 0;
				break;
			}
			if (number % i != 0)
				x++;
		}
		if (x == number-2)
			cout << number << endl;
		x = 0;
	}
	return 0;
}


