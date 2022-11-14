#include "ControlPersoana.h"



struct ViewAdmin {

private:

	ControlPersoana control;

public:

	void meniu() {

		cout << "-------MENIU ADMINISTRATOR--------\n" << endl;

		cout << "Introduceti tasta 1 pentru a vedea toate persoanele." << endl;

		cout << "Introduceti tasta 2 pentru a sterge o persoana." << endl;

		cout << "Introduceti tasta 3 pentru a adauga o persoana." << endl;

		cout << "Introduceti tasta 4 pentru a edita o persoana." << endl;

		cout << "-->";

	}

	void play() {

		bool run = true;

		while (run == true) {

			meniu();

			string x;
			cin >> x;

			int a = stoi(x);

			switch (a)
			{
			case 1: control.afisare(); cout << endl;
				break;
			case 2:eliminarePersoana();
				break;
			case 3:adaugare();
				break;
			default:
				break;
			}

		}

	}

	void eliminarePersoana() {

		cout << "Introduceti numele persoanei pe care doriti sa o stergeti: ";
		string nume;
		cin >> nume;

		if (control.isPersoanaByNume(nume) == false) {
			cout << "Numele introdus nu se gaseste in baza de date\n"<<endl;
		}
		else {
			
			control.stergerePersoana(nume);
			control.salvareFisier();
			cout << "Persoana a fost stearsa.\n";
			cout << endl;
		}

	}

	void adaugare() {

		cout << "Introduceti datele persoanei"<<endl;
		
		cout << "Nume:";
		string nume;
		cin >> nume; cout << endl;

		cout << "Prenume:";
		string prenume;
		cin >> prenume; cout << endl;

		cout << "Varsta:";
		int varsta;
		cin >> varsta; cout << endl;

		cout << "Parola:";
		string parola;
		cin >> parola; cout << endl;

		Persoana p(nume, prenume, varsta, parola);

		control.adaugare(p);
		control.salvareFisier();

		cout << "\nPersoana a fost adaugata" << endl;

	}

	void editare() {

		cout << "Persoana pe care doriti sa o editati:";
		string nume;
		cin >> nume; cout << endl;

		cout << "Introduceti mai jos care din urmatoarele categorii doriti sa le editati: prenume, varsta, parola";
		cout << "-->";
		string text;
		cin >> text;

		Persoana p = control.returnPersoanaByNume(nume);
		
		if (text == "prenume") {



		}

	}







};



























