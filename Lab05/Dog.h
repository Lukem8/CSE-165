#ifndef DOG_h
#define DOG_h
#include <string>
#include "Animal.h"

	class Dog: public Animal {

		public:
		Dog(){
       			cout << "Creating Dog" << endl;
       			setName("");
      			setAge(0);
   		 }

		Dog(string n, int a){
			
       			cout << "Creating Dog" << endl;
			setName(n);
			setAge(a);
		}
		~Dog(){
        		cout << "Deleting Dog" << endl;
    		}

		void feed(){
        		cout << "A bone, please!" << endl;
  		  }

	};

#endif
