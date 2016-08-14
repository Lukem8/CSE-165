#include <iostream>
#include <vector>
using namespace std;


class Circle : public Sortable {
	int r;
	public:
		Circle() {
			
		}
		Circle(int n) {
			r = n;
		}
	
		virtual bool compare(const Sortable* s) {
			//if (this->r < s->r)
			//	return true;
			//return false;
		}
		virtual void print() {
			cout << "Circle with radius: " << r << endl;
		}

};
