#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<string> v;
	vector<string> x;
	string input;
	cin >> input;
	while (input != "quit") {
		if (input.size() == 1){

			for (int i = 0; i < v.size(); i++) {
				string s = v[i];
				 
				if (s[0] == input[0]){
					x.push_back(s);
					break;
				}
			}
		cin >> input;
		continue;
		}
		else {
			v.push_back(input);
			cin >> input;
		}
	}
	for (int i = 0; i < x.size(); i++) {
		cout << x[i] << endl;	
	}
	return 0;
}
