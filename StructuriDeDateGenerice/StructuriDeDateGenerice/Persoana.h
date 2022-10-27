#include <iostream>
using namespace std;


struct Persoana {

private:
	string nume;
	string prenume;
	int varsta;
public:

	Persoana() {

	}

	Persoana(string nume, string prenume, int varsta) {
		this->nume = nume;
		this->prenume = prenume;
		this->varsta = varsta;
	}

	string getNume() {
		return this->nume;
	}

	void setNume(string nume) {
		this->nume = nume;
	}

	string getPrenume() {
		return this->prenume;
	}

	void setPrenume(string prenume) {
		this->prenume = prenume;
	}

	int getVarsta() {
		return this->varsta;
	}

	void setVarsta(int varsta) {
		this->varsta = varsta;
	}

};














