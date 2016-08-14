#include <iostream>
#include <vector>
using namespace std;
#include "Sortable.h"

class Data {

	vector<Sortable*> v;
	
	public:

		Data() {

		}
		~Data() {
		}
		void add(Sortable* s) {
			v.push_back(s);		
		}
		void print() {
			for (int i = 0; i < v.size(); i++) {
				//cout << "Circle with radius: " << v[i]->r << endl;
			}
			
		
			
		}
	
		void sort() {

		}
/*
		void sort() {
			int max,num;
			for (int i = v.size()-1; i >= 1; i--)		//For loop to start the sort algorithm
		{						// Minimum to maximum sort
			max = v[0];				// set max to first slot in array
			int imax = 0;				//index of temporary max
			for(int j = 1; j <= i; j++)
			{
				if (v[j] > v[imax])
				{
					max = v[j];
					imax = j;
					
				}
			
			}
			if (imax != i)
			{
				num = v[i];			// Swaps the current largest number with the last number in the array
				v[i] = v[imax];
				v[imax] = num;		
				
			}

		}
		}*/


};
