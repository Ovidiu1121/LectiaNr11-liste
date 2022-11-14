#include "listaDubla.h"


struct ControlPersoana {

private:

	ListaDubla<Persoana>lista;

public:

	ControlPersoana() {

		citire();

	}

	void citire() {

		ifstream read("persoane.txt");

		while (!read.eof()) {

			string nume;
			string prenume;
			int varsta;

			read >> nume;
			read >> prenume;
			read >> varsta;

			Persoana p(nume, prenume, varsta);
			this->lista.addFinal(p);

		}

	}

	void afisare() {

		Node<Persoana>* it = this->lista.iterator();

		while (it) {
			cout << it->data.descriere();
			it = it->next;
		}

	}

	void sortareDupaVarsta() {

		Node<Persoana>* it = this->lista.iterator();

		int size = lista.size() - 1;

		bool flag = true;
		do {
			flag = true;
			for (int i = 0; i < size; i++) {
				if (lista.get(i).getVarsta() > lista.get(i + 1).getVarsta()) {
					Persoana p = lista.get(i);
					lista.set(i, lista.get(i + 1));
					lista.set(i + 1, p);
					flag = false;
				}
			}

		} while (flag == false);

	}


};



























