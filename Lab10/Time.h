#include <iostream>
#include <math.h>
using namespace std;

class Time{
	int h,m,s;
	public: 
		Time(int h, int m, int s ) {
			this->h = h;
			this->m = m;
			this->s = s;
		}

		void add(const Time& t) {
			this->s += t.s;
			if (this->s >= 60){
				this->s -= 60;
				this->m += 1;
			}
			this->m += t.m;
			if (this->m >= 60){
				this->m -= 60;
				this->h += 1;
			}
			this->h += t.h;
		}



		void getAngles ( float& a, float& b, float& c ) {
			
		}


		int getHours(){
			return h;
		}
		int getMinutes() {
			return m;
		}
		int getSeconds() {
			return s;
		}


};
