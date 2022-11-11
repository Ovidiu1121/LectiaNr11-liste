#include "Node.h"

template<typename U>


struct Coada {

	Node<U>* head = NULL;

	Node<U>* iterator() {
		return head;
	}

	bool isEmpty(Node<U>* head) {

		if (head == NULL) {
			return true;
		}
		return false;
	}

	void push(U x) {

		if (isEmpty(head) == true) {
			head = new Node<U>;
			head->data = x;
			head->next = NULL;
		}
		else {

			Node<U>*nou=head;

			while (nou->next) {
				nou = nou->next;
			}

			Node<U>* aux = new Node<U>;

			aux->data = x;
			aux->next = NULL;
			nou->next = aux;
		}

	}

	void pop() {

		if (isEmpty(head) == true) {
			cout << "coada vida";
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
			cout << "coada vida";
			return U();
		}
		else {
			return aux->data;
		}

	}

};
























