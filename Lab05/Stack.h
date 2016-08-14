#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;
class Stack {
	public:
	struct Link {
		double data;
		Link* next;
		
		void initialize(double dat, Link* nxt){
			data = dat;
			next = nxt;
		}
	}* head;
	
	void initialize(){
		head = 0;
	}

	~Stack() {
		while(head){
			double x = pop();
			cout << x << " ";	
		}	
	}
	
	Stack() {
		head = 0;
	}
	
	Stack(int n){
		if (n > 0){
			Link* x = new Link;
			head = x;
			head->data = 1.0 + (n*0.1) - 0.1;
			head->next = NULL;
			Link* tmp = head;
			for (int i = 0; i < n-1; i++){
				Link* l = new Link;
				tmp->next = l;
				l->data = tmp->data - 0.1;
				l->next = NULL;
				tmp = tmp->next;
			}
		}
	}
	void push(double dat){
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}
	
	double peek(){
		if (head == 0){
			std::cout << "Stack is empty";
		}
		return head->data;
	}
	
	double pop(){
		if(head == 0)
			return 0;
		
		double result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}
	
	void cleanup(){
		if (head == 0){
			std::cout << "Stack is empty";
		}
		else {
			std::cout << "Stack is not empty";
		}
	}
};
#endif
