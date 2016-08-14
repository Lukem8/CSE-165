#ifndef RSTASH_H
#define RSTASH_H
#include <iostream>
#include <vector>
using namespace std;


	class Vec {

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

			bool containsE(const GlutWindow::Event &e) {
				if (e.mx >= x && e.mx <= (x+width) && e.my <= y && e.my <= (y+height)){
					return 1;
				}
				else
					return 0;
			}


	};

	class RectStash {

		public:
			vector<Rect> rects;
			RectStash() {
					
			}

			~RectStash() {
				
			}

	};

/*
	int main() {
		RectStash r;
		float x1,y1,w1,h1;
		
		cin >> x1;
		cin >> y1;
		cin >> w1;
		cin >> h1;
		while (1) {
		if (x1 < 0 && y1 < 0 && h1 < 0 && w1 < 0)
			break;
		Rect rect(x1,y1,w1,h1);
		
		r.rects.push_back(rect);


		cin >> x1;
		cin >> y1;
		cin >> w1;
		cin >> h1;
		}
		cin >> x1;
		cin >> y1;
		while(1){
			if (x1 == -99 && y1 == -99)
				break;
		Vec a(x1, y1);
		for (int i = 0; i < r.rects.size(); i++) {
			if (r.rects[i].contains(a))
				cout << "in ";
			else
				cout << "out ";
		}
		cout << endl;
		cin >> x1;
		cin >> y1;
		}



		return 0;
	}

*/






#endif
