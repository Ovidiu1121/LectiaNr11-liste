#include "functii.h"



/*Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente egal depărtate de capetele vectorului sunt prime între ele.*/

void solutie1() {

	Node* head = NULL;

	citire(head);
	perechiPrimeIntreEle(head);

}

/*Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente din vector au aceeași sumă a divizorilor.*/

void solutie2() {

	Node* head = NULL;

	citire(head);
	suma_divizori_perechi(head);

}

/*Se dă un vector x cu n elemente numere întregi, și un vector y cu m elemente, de asemenea numere întregi. Să se afișeze toate elementele din vectorul 
x care sunt mai mari decât toate elementele din vectorul y.*/

void solutie3() {

	Node* head = NULL;
	Node* q = NULL;
	int d;
	
	citire_cu_dimensiune(head,q,d);
	numereMaiMari(head,q);


}

/*se dă un număr natural nenul k și vector cu n numere naturale. Să se înlocuiască fiecare element cu multiplul lui k cel mai apropiat de el și să se afișeze
elementele astfel obținute în ordine inversă.*/

void solutie4() {



}






