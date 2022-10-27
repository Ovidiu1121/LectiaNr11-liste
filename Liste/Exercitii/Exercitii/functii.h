#include <iostream>
using namespace std;
#include <fstream>


struct Node {

	int data;
	Node* next;

};

void addFinal(Node*& head, int data) {

	if (head == NULL) {
		head = new Node;
		head->data = data;
		head->next = NULL;
	}
	else {
		Node* aux = head;

		while (aux->next) {
			aux = aux->next;
		}
		Node* nou = new Node;

		nou->data = data;
		nou->next = NULL;
		aux->next = nou;
	}

}

void citire(Node*&head) {

	ifstream read("lista.txt");

	Node* aux = head;

	while (!read.eof()) {
		int data;
		read >> data;
		addFinal(head, data);
	}

}

void afisare(Node* head) {

	Node* aux = head;

	while (aux!=NULL) {
		cout << aux->data << " ";
		aux = aux->next;
	}
	cout << endl;
}

int lungimeLista(Node* head) {

	Node* aux = head;
	int ct = 0;

	while (aux) {

		ct++;
		aux = aux->next;

	}
	return ct;
}

int return_nr_by_poz(Node* head, int poz) {

	Node* aux = head;
	int ct = 0;

	while (aux) {
		if (ct == poz) {
			return aux->data;
		}
		ct++;
		aux = aux->next;
	}
	return -1;
}

int cmmdc(int a, int b) {

	while (a != b) {

		if (a > b) {
			a -= b;
		}
		if (a < b) {
			b -= a;
		}

	}
	return b;
}

void perechiPrimeIntreEle(Node* head) {

	Node* aux = head;
	int i = 0, j,  d = lungimeLista(head);
	j = d - 1;

	do {

		int a = return_nr_by_poz(head, i);
		int b = return_nr_by_poz(head, j);

		if (cmmdc(a, b) == 1) {
			cout << a << "," << b << "\n";
		}
		i++;
		j--;

	} while (j >=d/2 && i <= d/2);
	

}

int sumaDivizori(int n) {
	int s = 0;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			s += i;
		}
	}
	return s;
}

int return_poz_by_nr(Node* head, int nr) {

	Node* aux = head;
	int ct = 0;

	while (aux) {

		if (aux->data == nr) {
			return ct;
		}
		ct++;
		aux = aux->next;
	}

	return -1;
}

void suma_divizori_perechi(Node* head) {

	Node* aux = head;
	int i;
	int d = lungimeLista(head);

	while (aux) {
		int s = sumaDivizori(aux->data);
		i = return_poz_by_nr(head, aux->data) + 1;

		do {
			int k = return_nr_by_poz(head, i);
			int sk = sumaDivizori(k);

			if (s == sk) {
				cout << aux->data << "," << k << "\n";
			}
			i++;
		} while (i <= d - 1);

		aux = aux->next;
	}

}

void citire_cu_dimensiune(Node*&head,Node*&head2, int &d) {

	ifstream read("lista.txt");

	read >> d;

	for (int i = 0; i < d; i++) {
		int data;
		read >> data;
		addFinal(head, data);
	}
	read >> d;
	for (int i = 0; i < d; i++) {
		int data;
		read >> data;
		addFinal(head2, data);
	}

}

bool nrMairMareDecatLista(Node* head, int n) {

	Node* aux = head;

	while (aux) {
		if (n < aux->data) {
			return false;
		}
		aux = aux->next;
	}
	return true;
}

void numereMaiMari(Node* head, Node* head2) {

	Node* aux = head;

	while (aux) {

		if (nrMairMareDecatLista(head2, aux->data) == true) {
			cout << aux->data << " ";
		}
		aux = aux->next;
	}

}

void inlocuireCuMultiplu(int k, int n) {

	while (n) {

		if (n % k == 0) {
			return;
		}
		else {
			n = n + 1;
			if (n % k == 0) {
				
			}
		}
	}

}


void push(Node*& head, int data) {

	if (head == NULL) {

		head = new Node;
		head->data = data;
		head->next = NULL;

	}
	else {
		Node* nou = new Node;
		nou->data = data;
		nou->next = head;
		head = nou;

	}

}

void pop(Node*& head) {

	if (head == NULL) {
		cout << "List is empty"<<endl;
	}
	else {
		head = head->next;
	}

}

void peak(Node* head) {

	if (head == NULL) {
		cout << "There's no peak";
	}
	else {
		cout << head->data << endl;
	}

}


