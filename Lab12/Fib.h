#include <iostream>

using namespace std;



class Fib {

	public:
		static int last;
		static int secondLast;
		Fib() {

		}

		int next() {
			
			
			int temp = secondLast + last;
			secondLast = last;
			last = temp;
			
			return (temp);
			
		}
	
		int next(bool b ) {
			if (b){
				last = 1;
				secondLast = 1;	
				return 1;
			}
	
				
		}


};
