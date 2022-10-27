#include "Node.h"

template<typename U>
struct List {

	Node<U>*head;

	//addStart
	void addStart(U x) {

		if (head == NULL) {
			head = new Node<U>;
			head->data = x;
			head->next = NULL;
		}
		else {
			Node<U>* nou = new Node<U>;
			nou->data = x;
			nou->next = NULL;
			head = nou;
		}

	}



	Node<U>* iterator() {

		return head;
	}





};
























