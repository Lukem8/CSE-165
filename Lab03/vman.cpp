#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	int num;
	int count = 0;
	int sum = 0;
	cin >> num;
	while (num != 0) {
		if (num > 0) {
			v.push_back(num);
		}
		else 
		{
			num = num*(-1);
			for (int i = 0; i < v.size(); i++) {
				if (v[i] == num) {
					v.erase(v.begin()+ i);
					i--;
				}
			}	
		}
	cin >> num;
	}
	for (int i = 0; i < v.size(); i++) {
		count++;
		sum += v[i];
	}
	cout << count << " ";
	cout << sum;
	return 0;
}
