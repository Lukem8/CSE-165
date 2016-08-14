#include <iostream>
#include <string>
#include <vector>
#include "Dog.h"
#include "display.h"
using namespace std;

int main(){
	vector<Animal*> v;
	int n;
	char type;
	string name;
	int age;
	cin >> n;
	while (n > 0){
		cin >> type;
		cin >> name;
		cin >> age;
		if (type == 'A'){
			Animal *a = new Animal();
			a->setName(name);
			a->setAge(age);
			v.push_back(a);
			n--;
		}
		else if (type == 'D'){
			Dog *d = new Dog(name ,age);
			//d->setAge(age);
			//d->setName(name);
			v.push_back(d);
			n--;
		}
		else {
			n--;
			continue;				
		}
		
}
	display(v);
	return 0;
}
