#include <iostream>
using namespace std;
#include <string>


struct Persoana {

private:
	string nume;
	string prenume;
	int varsta;
	string parola;
public:

	Persoana() {

	}

	Persoana(string nume, string prenume, int varsta,string parola) {
		this->nume = nume;
		this->prenume = prenume;
		this->varsta = varsta;
		this->parola = parola;
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

	string getParola() {
		return this->parola;
	}

	void setParola(string parola) {
		this->parola = parola;
	}

	string descriere() {

		string text = "";

		text += this->nume + " ";
		text += this->prenume + " ";
		text += to_string(this->varsta) + " ";
		text += this->parola + "\n";

		return text;

	}

	string toSave() {

		string text = "";

		text += this->nume + " ";
		text += this->prenume + " ";
		text += to_string(this->varsta) + " ";
		text += this->parola;

		return text;
	}

};














