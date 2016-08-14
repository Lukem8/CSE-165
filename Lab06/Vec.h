#ifndef VEC_H
#define VEC_H
#include <iostream>
using namespace std;

	class Vec {

		//float x,y;

		public:
			float x,y;
			static Vec null;
			Vec() {
				x=0;
				y=0;
			}	
			Vec(float a, float b) {
				x=a;
				y=b;
			}
			void add(Vec n) {
				x = x + n.x;
				y = y + n.y;
			}
	
			void print() {
				cout << "(" << x << ", " << y << ")" << endl;
			}


	};
	Vec Vec::null = Vec(0,0);

#endif
