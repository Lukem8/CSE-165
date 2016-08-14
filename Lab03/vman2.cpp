#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string *> v(10);
	string input;
	int length = input.length();
	while (input != "quit") {
		v[length]->push_back(input);
	cin >> input;	
	}
	cout << v[length];
	return 0;
}
