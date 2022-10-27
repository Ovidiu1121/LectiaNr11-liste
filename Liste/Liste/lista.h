#pragma once
#include <iostream>
using namespace std;
#include <math.h>
#include <fstream>

struct Node {

	int data;
	Node* next;

};

void addStart(Node*& head, int data) {
	
	if (head == NULL) {

		head = new Node;
		head->data = data;
		head->next = NULL;
		 
	}else {
		Node* nou = new Node;
		nou->data = data;
		nou->next = head;
		head = nou;

	}

}

void afisare(Node* head) {


	Node* aux = head;

	while (aux != NULL) {

		cout << aux->data << " ";
		aux = aux->next;
	}



}

void addFinal(Node*& head, int data) {

	if (head == NULL) {
		head = new Node;
		head->data = data;
		head->next = NULL;
	}
	else {
	
		Node* aux = head;
		
		while (aux->next != NULL) {

			aux = aux->next;
		}

		Node* nou = new Node;

		nou->data = data;
		nou->next = NULL;
		aux->next = nou;

	}

}

void adaugare(Node*& head, int poz, int x) {

	if (poz == 0) {
		addStart(head, x);
	}
	else {

		int ct = 0;

		Node* aux = head;

		while (aux != NULL&&ct!=poz-1) {

			ct++;
			aux = aux->next;
		}

		Node* nou = new Node;

		nou->next = aux->next;

		aux->next = nou;

		nou->data = x;
	}
	

}

void stergereStart(Node*& head) {

	head = head->next;

}

void stergereFinal(Node*& head) {

	Node* aux = head;

	while (aux->next->next != NULL) {
		
		aux = aux->next;
		
	}

	aux->next = NULL;

}

void stergere(Node*& head, int poz) {

	Node* aux = head;
	int ct = 0;

	while (aux != NULL && ct != poz-1) {

		ct++;
		aux = aux->next;

	}
	aux->next = aux->next->next;
}

void citire(Node*& head) {

	ifstream read("lista.txt");

	Node* aux = head;

	while (!read.eof()) {
		int data;
		read >> data;
		addFinal(head,data);
	}
	

}






