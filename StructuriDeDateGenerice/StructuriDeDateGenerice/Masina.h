#include <iostream>
using namespace std;


struct Masina {

private:

	string marca;
	int pret;
	int vechime;

public:

	Masina() {

	}

	Masina(string marca, int pret, int vechime) {
		this->marca = marca;
		this->pret = pret;
		this->vechime = vechime;
	}

	string getMarca() {
		return this->marca;
	}

	void setMarca(string marca) {
		this->marca = marca;
	}

	int getPret() {
		return this->pret;
	}

	void setPret(int pret) {
		this->pret = pret;
	}

	int getVechime() {
		return this->vechime;
	}

	void setVechime(int vechime) {
		this->vechime = vechime;
	}

};































