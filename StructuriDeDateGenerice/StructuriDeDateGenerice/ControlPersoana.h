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
			string parola;

			read >> nume;
			read >> prenume;
			read >> varsta;
			read >> parola;

			Persoana p(nume, prenume, varsta,parola);
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

	bool isPersoanaByNume(string nume) {

		Node<Persoana>* it = lista.iterator();

		while (it) {
			if (it->data.getNume() == nume) {
				return true;
			}
			it = it->next;
		}
		return false;
	}

	bool parolaCorecta(string nume, string parola) {

		Node<Persoana>* it = lista.iterator();

		while (it) {
			if (it->data.getNume() == nume) {
				if (it->data.getParola() == parola) {
					return true;
				}
				return false;
			}
		}
		return -1;
	}

	int returnPozByNume(string nume) {

		Node<Persoana>* it = lista.iterator();
		int ct = 0;

		while (it) {
			if (it->data.getNume() == nume) {
				return ct;
			}
			ct++;
			it = it->next;
		}
		return -1;
	}

	void stergerePersoana(string nume) {

		int poz = returnPozByNume(nume);

		lista.deleteByPosition(poz);

	}

	string save() {

		string text = "";

		int size = lista.size();

		for (int i = 0; i < size; i++) {
			text += lista.get(i).toSave();
			text += "\n";
		}

		return text;
	}

	void salvareFisier() {

		ofstream write("persoane.txt");

		write << save();

		write.close();
	}

	void adaugare(Persoana x) {

		int poz = lista.size();

		lista.addByPosition(x, poz);

	}

	Persoana returnPersoanaByNume(string nume) {

		Node<Persoana>* it = lista.iterator();

		while (it) {
			if (it->data.getNume() == nume) {
				return it->data;
			}
			it = it->next;
		}

		return Persoana();

	}

	




};



























