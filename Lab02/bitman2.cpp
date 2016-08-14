#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	int j;

	int sum = 0;
	string input;
	cin >> input;
	int size = input.length();
	string bit;
	while (true) {	
	sum = 0;
	for (int i = 0; i < 8; i++){
		bit[i] = input[i];
	}
	j = 0;
	for (int i = 7; i >=0; i--){
		if (bit[i] == '1'){
			sum += pow(2.0,j);
			j++;
		}
	}
	cout << sum << " ";
	if (input.length() >= 8)
		input = input.substr(8,input.length()-1);
	else
		for (int i = 8; i < input.length(); i--){
			input = input[i];
	}
	size -=8;
	
	if (size <=1)
		break;
	}
	return 0;
}
