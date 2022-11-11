#include "listaDubla.h"


void testAddStart() {

	ListaDubla<Masina>masina;

	Masina a("audi", 23, 2020);
	Masina b("bmw", 40, 2017);
	Masina c("dacia", 22, 2008);
	Masina d("ferarri", 31, 2019);

	masina.addStart(a);
	masina.addStart(b);
	masina.addStart(c);
	masina.addStart(d);

	Node<Masina>* it = masina.iterator();

	while (it) {
		cout << it->data.descriere() << endl;
		it = it->next;
	}

}

void testAddFinal() {

	ListaDubla<Masina>masina;

	Masina a("audi", 23, 2020);
	Masina b("bmw", 40, 2017);
	Masina c("dacia", 22, 2008);
	Masina d("ferarri", 31, 2019);

	masina.addFinal(a);
	masina.addFinal(b);
	masina.addFinal(c);
	masina.addFinal(d);

	Node<Masina>* it = masina.iterator();

	while (it) {
		cout << it->data.descriere() << endl;
		it = it->next;
	}

}

void testeDeleteStart() {

	ListaDubla<Masina>masina;

	Masina a("audi", 23, 2020);
	Masina b("bmw", 40, 2017);
	Masina c("dacia", 22, 2008);
	Masina d("ferarri", 31, 2019);

	masina.addFinal(a);
	masina.addFinal(b);
	masina.addFinal(c);
	masina.addFinal(d);
	masina.deleteStart();

	Node<Masina>* it = masina.iterator();

	while (it) {
		cout << it->data.descriere() << endl;
		it = it->next;
	}

}

void testeDeleteFinal() {

	ListaDubla<Masina>masina;

	Masina a("audi", 23, 2020);
	Masina b("bmw", 40, 2017);
	Masina c("dacia", 22, 2008);
	Masina d("ferarri", 31, 2019);

	masina.addFinal(a);
	masina.addFinal(b);
	masina.addFinal(c);
	masina.addFinal(d);
	masina.deleteFinal();

	Node<Masina>* it = masina.iterator();

	while (it) {
		cout << it->data.descriere() << endl;
		it = it->next;
	}

}

void testAddByPosition() {

	ListaDubla<Masina>masina;

	Masina a("audi", 23, 2020);
	Masina b("bmw", 40, 2017);
	Masina c("dacia", 22, 2008);
	Masina d("ferarri", 31, 2019);

	masina.addFinal(a);
	masina.addFinal(b);
	masina.addFinal(c);
	masina.addByPosition(d, 2);

	Node<Masina>* it = masina.iterator();

	while (it) {
		cout << it->data.descriere() << endl;
		it = it->next;
	}

}

void testDeleteByPosition() {

	ListaDubla<Masina>masina;

	Masina a("audi", 23, 2020);
	Masina b("bmw", 40, 2017);
	Masina c("dacia", 22, 2008);
	Masina d("ferarri", 31, 2019);

	masina.addFinal(a);
	masina.addFinal(b);
	masina.addFinal(c);
	masina.addFinal(d);
	masina.deleteByPosition(1);

	Node<Masina>* it = masina.iterator();

	while (it) {
		cout << it->data.descriere() << endl;
		it = it->next;
	}

}











