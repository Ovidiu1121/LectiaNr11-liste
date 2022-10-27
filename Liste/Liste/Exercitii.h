#include "lista.h"



/*Se dă un șir cu n elemente, numere naturale. Determinați diferența în valoare absolută dintre numărul de valori pare din șir și numărul de valori impare
din șir*/

void diferenta(Node*& head) {

	int par = 0, imp = 0;

	Node* aux = head;

	while (aux) {
		if (aux->data % 2 == 0) {
			par += aux->data;
		}
		else {
			imp += aux->data;
		}
		aux = aux->next;
	}

	cout <<par- imp;

}

/*Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele din vector care sunt multipli ai ultimului element.*/

void multipli(Node*& head) {

	Node* aux = head;

	while (aux->next) {
		aux = aux->next;
	}

	Node* k = head;

	while (k) {

		if (k->data% aux->data == 0) {
			cout << k->data << " ";
		}
		k = k->next;
	}

}

/*Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele cu indici pari în ordinea crescătoare a indicilor, iar elementele cu indici 
impari în ordinea descrescătoare a indicilor.*/

void pozitii(Node* head,Node*k) {

	Node* aux = head, * a = head;
	int ct = 0;

	while (aux) {

		if (ct % 2 == 1) {
			cout << aux->data << " ";
		}
		aux = aux->next;
		ct++;
	}
	cout << endl;
	ct = 0;

	while (a!=NULL) {
		if (ct % 2 == 0) {
			addStart(k, a->data);
		}
		ct++;
		a = a->next;
	}


}


























