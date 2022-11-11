#include "Node.h"

template<typename U>


struct ListaDubla {

	Node<U>* head = NULL;

	Node<U>* iterator() {
		return head;
	}

	void addStart(U x) {

		if (head == NULL) {
			head = new Node<U>;
			head->prev = NULL;
			head->data = x;
			head->next = NULL;
		}
		else {

			Node<U>* aux = new Node<U>;

			aux->data = x;
			aux->prev = NULL;
			aux->next = head;
			head = aux;

		}

	}

	void addFinal(U x) {

		if (head == NULL) {
			head = new Node<U>;
			head->data = x;
			head->next = NULL;
			head->prev = NULL;
		}
		else {
			Node<U>* aux = head;

			while (aux->next != NULL) {
				aux = aux->next;
			}

			Node<U>* nou = new Node<U>;

			nou->data = x;
			nou->next = NULL;
			nou->prev = aux;
			aux->next = nou;

		}

	}

	void deleteStart() {

		head = head->next;

	}

	void deleteFinal() {

		Node<U>* aux = head;

		if (aux->next == NULL) {
			return;
		}

		while (aux->next->next != NULL) {
			aux = aux->next;
		}
		aux->next = NULL;
	}

	void addByPosition(U x, int poz) {

		int ct = 0;

		if (poz == 0) {
			addStart(x);
		}
		Node<U>* aux = head;

		while (aux && ct != poz - 1) {
			aux = aux->next;
			ct++;
		}

		Node<U>* nou = new Node<U>;

		nou->next = aux->next;
		nou->prev = aux;
		nou->data = x;
		aux->next = nou;

	}

	void deleteByPosition(int poz) {

		int ct = 0;

		Node<U>* aux = head;

		while (aux && ct != poz - 1) {
			aux = aux->next;
			ct++;
		}
		aux->next = aux->next->next;
	}


};


























