#include "lista.h"



void testAddStart() {


	List<Persoana> persoane;

	Persoana a("vlad", "s", 22);
	Persoana b("alex", "p", 18);
	Persoana c("mihai", "k", 43);

	persoane.addStart(a);
	persoane.addStart(b);
	persoane.addStart(c);

	Node<Persoana>*it=persoane.iterator();

	while (it) {
		cout<< it->data.descriere() << endl;
		it = it->next;
	}


}

void testAddFinal() {

	List<Persoana>p;

	Persoana a("alex", "f", 23);
	Persoana b("dan", "s", 44);
	Persoana c("mihai", "l", 18);

	p.addFinal(a);
	p.addFinal(b);
	p.addFinal(c);

	Node<Persoana>* it = p.iterator();

	while (it) {
		cout << it->data.descriere() << endl;
		it = it->next;
	}

}

void testAddByPosition() {

	List<Persoana>p;

	Persoana a("alex", "f", 23);
	Persoana b("dan", "s", 44);
	Persoana c("mihai", "l", 18);
	Persoana d("aaaaaaa", "b", 99);
	
	p.addFinal(a);
	p.addFinal(b);
	p.addFinal(c);
	p.addByPosition(d, 1);

	Node<Persoana>* it = p.iterator();

	while (it) {
		cout << it->data.descriere() << endl;
		it = it->next;
	}

}

void testDeleteByPosition() {

	List<Persoana>p;

	Persoana a("alex", "f", 23);
	Persoana b("dan", "s", 44);
	Persoana c("mihai", "l", 18);

	p.addFinal(a);
	p.addFinal(b);
	p.addFinal(c);

	p.deleteByPosition(1);

	Node<Persoana>* it = p.iterator();

	while (it) {
		cout << it->data.descriere() << endl;
		it = it->next;
	}

}

void testDeleteFinal() {

	List<Persoana>p;

	Persoana a("alex", "f", 23);
	Persoana b("dan", "s", 44);
	Persoana c("mihai", "l", 18);

	p.addFinal(a);
	p.addFinal(b);
	p.addFinal(c);
	p.deleteFinal();

	Node<Persoana>* it = p.iterator();

	while (it) {
		cout << it->data.descriere() << endl;
		it=it->next;
	}

}

void testDeleteStart() {

	List<Persoana>p;

	Persoana a("alex", "f", 23);
	Persoana b("dan", "s", 44);
	Persoana c("mihai", "l", 18);

	p.addFinal(a);
	p.addFinal(b);
	p.addFinal(c);
	p.deleteStart();

	Node<Persoana>* it = p.iterator();

	while (it) {
		cout << it->data.descriere();
		it = it->next;
	}

}

void testContainsByName() {

	List<Persoana>p;

	Persoana a("alex", "f", 23);
	Persoana b("dan", "s", 44);
	Persoana c("mihai", "l", 18);

	p.addFinal(a);
	p.addFinal(b);
	p.addFinal(c);
	
	
	if (p.containsByName("s") == true) {
		cout << "DA";
	}
	else {
		cout << "NU";
	}

}

void testIsEmpty() {

	List<Persoana>p;

	Persoana a("alex", "f", 23);
	Persoana b("dan", "s", 44);
	Persoana c("mihai", "l", 18);

	p.addFinal(a);
	p.addFinal(b);
	p.addFinal(c);

	if (p.isEmpty() == true) {
		cout << "lista este vida";
	}
	else {
		cout << "lista nu e vida";
	}

}

void testSize() {

	List<Persoana>p;

	Persoana a("alex", "f", 23);
	Persoana b("dan", "s", 44);
	Persoana c("mihai", "l", 18);

	p.addFinal(a);
	p.addFinal(b);
	p.addFinal(c);

	cout << p.size();

}

void testGet() {

	List<Persoana>p;

	Persoana a("alex", "f", 23);
	Persoana b("dan", "s", 44);
	Persoana c("mihai", "l", 18);

	p.addFinal(a);
	p.addFinal(b);
	p.addFinal(c);

	Persoana t=p.get(1);

	cout << t.descriere();

}

void testSet() {

	List<Persoana>p;

	Persoana a("alex", "f", 23);
	Persoana b("dan", "s", 44);
	Persoana c("mihai", "l", 18);

	p.addFinal(a);
	p.addFinal(b);
	p.addFinal(c);

	Persoana d("nou", "d", 33);

	p.set(1, d);

	Node<Persoana>* it = p.iterator();

	while (it) {
		cout << it->data.descriere();
		it = it->next;
	}

}








