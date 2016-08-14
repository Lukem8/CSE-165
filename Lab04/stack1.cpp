#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
	double input;
	double* x;
	Stack stack;
	int size;
	cin >> size;
	stack.initialize();
	for (int i=0; i < size; i++) {
		cin >> input;
		stack.push(new double(input));
		
	}
	Stack::Link *temp;  
	temp = stack.head;
	//temp.initialize(stack.head->data,stack.head->next);
	for (int i = 0; i < size; i++) {
		
		//cout <<  *((double*)stack.peek()) << endl;
		
		cout <<  *((double*)temp->data) << endl;
		//temp->next = stack.head->next;
		temp = temp->next;
		
	}
	 
	for (int i = 0; i < size; i++) {
		
		stack.pop();
		
	}
	
	
	stack.cleanup();
	
	return 0;
}
