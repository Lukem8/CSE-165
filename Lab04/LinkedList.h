#ifndef LINKED_H
#define LINKED_H
#
	class LinkedList {
		struct Link {
		void* data;
		Link* next;
		
		void initialize(void* dat, Link* nxt){
			data = dat;
			next = nxt;
		}
	}* head;
	
	
		LinkedList(void* dat, Link* nxt);
		void add(LinkedList::Link* l, int n);

		void print();

		void cleanup();
	}


#endif
