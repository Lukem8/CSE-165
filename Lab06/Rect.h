#ifndef RECT_H
#define RECT_H
#include <iostream>
//#include "Vec.h"
using namespace std;


	class Rect {
	
		float x,y, width, height;

		public:

			Rect(float x1, float y1, float w, float h) {
				x = x1;
				y = y1;
				width = w;
				height = h;
			}
	
			bool contains(Vec n) {
				if (n.x >= x && n.x <= (x+width) && n.y <= y && n.y <= (y+height)){
					return 1;
				}
				else
					return 0;
			}

			


	};


#endif
