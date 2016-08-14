#include <iostream>
using namespace std;
#include <cstdlib>
#include <cstdio>
class Counter {
	
	public:
		int ID;
		static int count;
		Counter() : ID(count++) {
			//cout << ID << " " << "created" << endl;
		}
		
		
/*
		void* operator new(size_t size) {
			cout << "new" << endl;
			return malloc(size);
		}

		void operator delete(void* ptr) {
			cout << "delete" << endl;
			free(ptr);
		}
*/
		void* operator new[](size_t size) {
			
			int n = size / (sizeof(Counter))-1;
			cout << "new " << n << " counters starting at " << count << endl;
			return malloc(size);
		}
		void operator delete[](void* ptr) {
			cout << "delete counters" << endl;
			free(ptr);
		}
		~Counter()  {
			//cout << ID << " " << "destroyed" << endl;
		}

};
