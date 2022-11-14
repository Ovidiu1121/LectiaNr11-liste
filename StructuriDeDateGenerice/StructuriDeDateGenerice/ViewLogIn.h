#include "ControlPersoana.h"



struct ViewLogIn {

private:

	ControlPersoana control;

public:

	void meniu() {

		cout << "---LOG IN---\n" << endl;
		cout << "Introduceti numele dumneavoastra:";

		string nume;
		cin >> nume;

		if (control.isPersoanaByNume(nume) == false) {
			cout << "Numele introdus este gresit."<<endl;
		}
		else {
			
			cout << "Introduceti parola:";

			string parola;
			cin >> parola;

			if (control.parolaCorecta(nume, parola) == false) {
				cout << "Parola introdusa este gresita." << endl;
			}
			else {
				cout << "Logat";
			}
		}

	}








};




























