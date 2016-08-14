#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int num;
	char x;
	cin >> x;
	cin >> num;
	while (num != -2) {
		if (num == -1){
			cout << endl;
		}
		else {
			for (int i = 0; i  < num; i++) {
				cout << x;
			}
		}
		cin >> x;
		cin >> num;
	}
	return 0;
}
