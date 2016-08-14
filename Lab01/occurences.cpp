#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
	int i = 0;
	string word;
	ifstream myfile;
	myfile.open("words.txt");
	string s;
	string input;
	cin >> input;
	int counter = 0;
	char c;
	
	while (myfile >> word) {
		
		if (word == input) {
			counter++;
			continue;
		}
		i = 0;
		while (word[i])
  		{
    			c=word[i];
			
    			word[i] = (tolower(c));
    			i++;
			
  		}
		
		for (int i = 0; i < word.length(); i++) {
			if (word[i] == ',' || word[i] == '?' || word[i] == '.')
				word = word.substr(0, word.length()-1);
		}
		
		if (word == input)
			counter++;
		
		
	}
	

	
	cout << counter << endl;
	myfile.close();
	return 0;
}
