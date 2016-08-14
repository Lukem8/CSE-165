#ifndef ENTRY_H
#define ENTRY_H
#include <string>
#include <iostream>
using namespace std;
	struct Entry {
		string first;
		string last;
		string email;
		void setName(string name) {
			first = name;
		}
		
		void setLastname(string lastname) {
			last = lastname;
		}
		void setEmail(string email2) {
			email = email2;
		}
		void print() {
			cout << "First Name: " << first << endl;
			cout << "Last Name: " << last << endl;
			cout << "Email: " << email << endl;
		}
	/*	string getName() {
			return first;
		}

		string getLastName() {
			return last;
		}
	
		
		string getEmail() {
			return email;
		}
*/
		
	};

#endif
