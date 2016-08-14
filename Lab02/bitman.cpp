#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <sstream>
using namespace std;

int main()
{
	int sum = 0;
	string input;
	//cin >> input;
	string reversed;
	int j = 0;

	stringstream stream;
	
	stream << input;
	int n;
	stream >> n;
	
	
	while (true) {
	cin >> input;
	if (input[0] == '-')
		break;
	sum = 0;
	j = 0;
	for (int i = input.length()-1; i >= 0; i--)
	{
		
		
		if (input[i] == '1')
 		{
			sum += pow(2.0,j);
			j++;
			continue;
		}
		else
			j++;
	}
	
	cout << sum << " ";
	j = input.length()-1;
	for (int i = 0; i < input.length(); i++)
	{
	
		reversed[i] = input[j];
		j--;	
	}
	
	for (int i = 0; i < input.length(); i++)
	{
		cout << reversed[i];
	}
		cout << " ";



	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == '1')
			input[i] = '0';
		else
			input[i] = '1';
	}
	for (int i = 0; i < input.length(); i++)
	{
		cout << input[i];
	}
	cout << endl;
	
	sum = 0;
	
	
	
	}
	
	return 0;
}
