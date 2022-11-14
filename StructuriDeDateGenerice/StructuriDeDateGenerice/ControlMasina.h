#include "lista.h"

struct ControlMasina {

private:
	List<Masina>m;

public:

	ControlMasina() {

		citire();
	}

	void citire() {

		ifstream read("masini.txt");

			
		while (!read.eof()) {
			string  marca;
			int pret;
			int vechime;

			read >> marca;
			read >> pret;
			read >> vechime;

			Masina x(marca, pret, vechime);
			m.addFinal(x);
		}

	}

	void afisare() {

		Node<Masina>* it = m.iterator();

		while (it) {
			cout << it->data.descriere();
			it=it->next;
		}

	}

	void sortare() {

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

		afisare();

	}

};
































