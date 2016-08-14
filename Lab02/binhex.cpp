#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>

using namespace std;

void binary (int input, int arr[]) {
	int j = 0; 
for (int i = 10; i >=0; i--)
{
	if (input >= pow(2.0,i)) {
		input -= pow(2.0,i);
		arr[j] = 1;
		j++;
	}
	else {
		arr[j] = 0;
		j++;
	}	
	
}

}

int main() 
{
	int arr[11];
	for (int i = 0; i < 11; i++)
		arr[i] = 1;
	int bits;
	int num;
	cin >> num;
	
	while (num != -1)
	{
		
		cout << hex << num << " ";
		
		
		int found;
		binary(num,arr);

		for (int i=0; i < 11; i++)
		{
			if (arr[i] == 1){
				found = i;
				break;
			}
		}
		for (int i = found; i < 11; i++) {
			cout << arr[i];
		}
		cout << endl;
		cin >> num;	
	}

return 0;
}

