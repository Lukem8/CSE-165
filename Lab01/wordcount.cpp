#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream myfile;
	myfile.open("words.txt");
	int counter = 0;
	string s;
	while (getline(myfile,s)){
		counter++;
		for (int i = 0; i < s.length(); i++){
			if (s[i] == ' ' || s[i] == '\n')	
				counter++;
		}
	}
	cout << counter << endl;
	myfile.close();
	return 0;
}
