#include "lista.h"

template<typename Masina>


struct Lista {

	Node<Masina>* head = NULL;

	List<Masina>m;

	void citire(List<Masina>lst) {

		ifstream read("masini.txt");

		Node<Masina>* aux = head;
			
		while (!read.eof()) {
			string  marca;
			int pret;
			int vechime;

			read >> marca;
			read >> pret;
			read >> vechime;

			Masina x(marca, pret, vechime);
			lst.addFinal(x);
		}

	}

	void afisare() {

		Node<Masina>* it = m.iterator();

		while (it) {
			cout << it->data.descriere();
			it=it->next;
		}

	}

};

void sortare() {

	Lista<Masina>x;
	List<Masina>m;

	x.citire();

	Node<Masina>* it = m.iterator();
	int ct = 0;

	while (it) {
		if (it->next != NULL) {
			if (it->data.getVechime() > it->next->data.getVechime()) {
				m.set(ct, it->next->data);
				ct++;
				m.set(ct, it->data);
			}
		}
		it = it->next;
	}

	it = m.iterator();

	while (it) {
		cout << it->data.descriere();
		it = it->next;
	}

	x.afisare();

}































