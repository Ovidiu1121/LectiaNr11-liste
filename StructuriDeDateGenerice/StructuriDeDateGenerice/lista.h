#include "Node.h"

template<typename T>

struct List {

	Node<T>*head=NULL;

	//addStart
	void addStart(T x) {

		if (head ==NULL) {
			head = new Node<T>;
			head->data = x;
			head->next =NULL;
		}
		else {
			Node<T>* noT = new Node<T>;
			noT->data = x;
			noT->next = head;
			head = noT;
		}

	}

	Node<T>* iterator() {

		return head;
	
	}

	void addFinal(T x) {

		if (head ==NULL) {
			head = new Node<T>;
			head->data = x;
			head->next =NULL;
		}
		else {
			Node<T>* aTx = head;

			while (aTx->next !=NULL) {
				aTx = aTx->next;
			}

			Node<T>* noT = new Node<T>;

			noT->data = x;
			noT->next =NULL;
			aTx->next = noT;

		}

	}

	void addByPosition(T x, int poz) {

		if (poz == 0) {
			addStart(x);
		}
		else {

			Node<T>* aTx = head;

			int k = 0;

			while (aTx !=NULL && k != poz - 1) {
				aTx = aTx->next;
				k++;
			}

			Node<T>* noT = new Node<T>;
			noT->next = aTx->next;
			aTx->next = noT;
			noT->data = x;

		}

	}

	void deleteByPosition(int poz) {

		Node<T>* aTx = head;
		int ct = 0;

		while (aTx !=NULL && ct != poz - 1) {
			ct++;
			aTx = aTx->next;
		}
		
		aTx->next = aTx->next->next;

	}

	void deleteFinal() {

		Node<T>* aTx = head;

		if (aTx->next ==NULL) {
			return;
		}

		while (aTx->next->next !=NULL) {
			aTx = aTx->next;
		}
		aTx->next =NULL;
	}

	void deleteStart() {

		head = head->next;

	}

	bool containsByName(string name) {

		if (head ==NULL) {
			return false;
		}
		else {

			Node<T>* aTx = head;

			while (aTx) {

				if (aTx->data.getNume() == name) {
					return true;
				}
				aTx = aTx->next;
			}

		}
		return false;
	}

	bool isEmpty() {

		if (head ==NULL) {
			return true ;
		}
		else {
			return false;
		}

	}

	int size() {

		int ct = 0;

		if(head ==NULL) {
			return 0;
		}

		Node<T>* aTx = head;

		while (aTx) {
			ct++;
			aTx = aTx->next;
		}
		return ct;
	}

	T get(int poz) {

		Node<T>* aTx = head;

		int ct = 0;
		int k = size();

		if (head ==NULL) {
			return T();
		}

		if (poz > k-1) {
			return T();
		}

		while (aTx) {
			if (ct == poz) {
				return aTx->data;
			}
			ct++;
			aTx = aTx->next;
		}
		return T();
	}

	void set(int poz,T nou) {
		
		Node<T>* aux = head;
		int ct = 0;
		int k = size();

		if (head == NULL) {
			return;
		}

		if (poz > k - 1) {
			return;
		}

		while (aux) {

			if (ct == poz) {
				aux->data = nou;
			}
			aux = aux->next;
			ct++;
		}

	}


};
























