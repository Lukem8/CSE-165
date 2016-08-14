#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> v;
	vector<string> y;
	int count = 0;
	int j = 0;
	int index;
	bool x = false;
	string word;
	string s;
	string input;
	cin >> input;
	while (input != "quit") {
		if(input.length() <= 3)
		{
			v.push_back(input);
			cin >> input;
			
			continue;
		}
		else 
		{
			for (int k = 0; k < v.size(); k++) 
			{
				
					
				if (x)
					s = v[k-1];
				else
					s = v[k];
				x = false;
				cout << s << endl;		//this wont print the second thing in the vecotr but it prints it down below in the for loop...
				
				//cout << s << endl;
				for (int i = 0; i  < input.length(); i++)
				{	
					j = 0;
					
					if (s[j] == input[i]) 
					{	
						index = i;
						
						j++;
						i++;
						while (s[j] == input[i] && j < s.length())
						{
							j++;
							i++;
							
						}
						if (j == s.length())
						{
							x = true;
							//word = "";
							word = input.substr(0,index) + input.substr(index+s.length(),input.length());		//gotta fix the substring part
							
							v.erase(v.begin()+ 0);
							for (int k = 0; k  < v.size(); k++)
								cout << v[k] << endl;
							
						}
					}
					/*j = s.length(); //gotta fix this we gotta make sure j = s.length()
					if (j == s.length())
					{
						x = true;
						word += input.substr(0,index); //+ input.substr( s.length(),input.length());		//gotta fix the substring part
						//word = "hello";
						v.erase(v.begin()+ i);
						
					} */
					
					
				}
			
			}
			
		}
	y.push_back(word);
	cout << y.back() << endl;
	cin >> input;
	}
	
	return 0;
}
