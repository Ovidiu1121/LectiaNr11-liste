#include "Node.h"

template<typename U>


struct Stiva {

	Node<U>* head = NULL;

	Node<U>* iterator() {

		return head;

	}

	void push(U x) {
		
		Node<U>* aux = new Node<U>;
		aux->data = x;
		aux->next = head;
		head = aux;

	}

	bool isEmpty(Node<U>*head) {

		if (head == NULL) {
			return true;
		}
		return false;
	}

	void pop() {

		if (isEmpty(head) == true) {
			cout << "stiva vida";
			return;
		}
		else {
			Node<U>* aux = head;
			head = head->next;
			delete aux;
		}

	}

	U peak() {

		Node<U>* aux = head;

		if (isEmpty(head) == true) {
			cout << "stiva vida";
			return U();
		}
		else {
			return aux->data;
		}
		
	}

	

};































