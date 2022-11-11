#include "coada.h"


void testPush() {

	Coada<Masina>masina;

	Masina a("audi", 23, 2020);
	Masina b("bmw", 40, 2017);
	Masina c("dacia", 22, 2008);
	Masina d("ferarri", 31, 2019);

	masina.push(a);
	masina.push(b);
	masina.push(c);
	masina.push(d);

	Node<Masina>* it = masina.iterator();

	while (it) {
		cout << it->data.descriere() << endl;
		it = it->next;
	}

}

void testPop() {

	Coada<Masina>masina;

	Masina a("audi", 23, 2020);
	Masina b("bmw", 40, 2017);
	Masina c("dacia", 22, 2008);
	Masina d("ferarri", 31, 2019);

	masina.push(a);
	masina.push(b);
	masina.push(c);
	masina.push(d);
	masina.pop();

	Node<Masina>* it = masina.iterator();

	while (it) {
		cout << it->data.descriere() << endl;
		it = it->next;
	}

}

void testPeak() {

	Coada<Masina>masina;

	Masina a("audi", 23, 2020);
	Masina b("bmw", 40, 2017);
	Masina c("dacia", 22, 2008);
	Masina d("ferarri", 31, 2019);

	masina.push(a);
	masina.push(b);
	masina.push(c);
	masina.push(d);

	Masina s = masina.peak();

	cout << s.descriere();

}




















