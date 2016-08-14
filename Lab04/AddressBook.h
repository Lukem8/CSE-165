#ifndef ADDY_H
#define ADDY_H
#include <string>
#include <iostream>
#include "Entry.h"
#include <vector>
using namespace std;

	struct AddressBook {
		void addEntry(Entry a);
		void print();
		void printEntries();
		void add(AddressBook* a);
		vector<AddressBook> abook;
		vector<Entry> entries;
		
		AddressBook(string name, string lastname, string email) {
			Entry a;
			a.setName(name);
			a.setLastname(lastname);
			a.setEmail(email);
			addEntry(a);
			
		}
		

	}; 

	void AddressBook::printEntries(){
			entries[0].print();		
		}

	void AddressBook::addEntry(Entry a){
		entries.push_back(a);
	}
		void AddressBook::add(AddressBook *current) {
			abook.push_back(*current);
		}

		void AddressBook::print() {
			printEntries();
			for (int i = 0; i < abook.size(); i++){
				abook[i].printEntries();				
			}
			std::cout << endl;
		}

#endif
