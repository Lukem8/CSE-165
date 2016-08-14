#include <iostream>

using namespace std;

int main() {
	struct a {
		char b;
		double c;
		
		
	};

	struct b {
		char b,d;
		double c;
		
		
	};

	struct c {
		char b,d,e;
		double c;
		
		
	};

	struct d {
		char b,d,e,f;
		double c;
		
		
	};

	struct e {
		
	};

	struct f {
		char a;
		int b;
		char c;
		
	};

	struct g {
		char a,b;
		int x;
	};
	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(e) << endl;
	cout << sizeof(f) << endl;
	cout << sizeof(g) << endl;
	return 0;
}
