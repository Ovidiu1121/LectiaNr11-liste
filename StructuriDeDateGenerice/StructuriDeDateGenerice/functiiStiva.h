#include "stiva.h"


void testPush() {

	Stiva<Masina>masina;

	Masina a("audi", 23, 2020);
	Masina b("bmw", 40, 2017);
	Masina c("dacia", 22, 2008);

	masina.push(a);
	masina.push(b);
	masina.push(c);

	Node<Masina>* it = masina.iterator();

	while (it) {
		cout << it->data.descriere() << endl;
		it = it->next;
	}

}

void testPop() {

	Stiva<Masina>masina;

	Masina a("audi", 23, 2020);
	Masina b("bmw", 40, 2017);
	Masina c("dacia", 22, 2008);

	masina.push(a);
	masina.push(b);
	masina.push(c);
	masina.pop();

	Node<Masina>* it = masina.iterator();

	while (it) {
		cout << it->data.descriere() << endl;
		it = it->next;
	}

}

void testPeak() {

	Stiva<Masina>masina;

	Masina a("audi", 23, 2020);
	Masina b("bmw", 40, 2017);
	Masina c("dacia", 22, 2008);

	masina.push(a);
	masina.push(b);
	masina.push(c);
	Masina d=masina.peak();

	cout << d.descriere();

}




















