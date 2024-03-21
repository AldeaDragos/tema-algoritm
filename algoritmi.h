#pragma once
#include <iostream>
#include <string.h>
using namespace std;

void afisareVec(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}

}

void sortareaSelectie(int v[], int dim) {

	for (int i = 0; i < dim; i++) {


		for (int j = i + 1; j < dim; j++) {


			if (v[i] > v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
}



void  bubbleSort(int v[], int dim) {


	bool sortat = false;


	do {


		sortat = true;

		for (int i = 0; i < dim - 1; i++) {

			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}

		}

	} while (sortat == false);



}

bool prim(int n) {

	for (int i = 2; i * i<=n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void bubbleSortDesc(int v[], int dim) {


	bool sortat = false;


	do {


		sortat = true;

		for (int i = dim - 1; i > 0; i--) {

			if (v[i] > v[i-1]) {
				int aux = v[i];
				v[i] = v[i-1];
				v[i-1] = aux;
				sortat = false;
			}

		}

	} while (sortat == false);

}

void pozVector(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		cout << i+1 << " ";
	}
	cout << endl;
}

int nrDiv(int n) {
	int ct = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			ct++;
		}
	}
	return ct;
}

int cmmdc(int a, int b) {

	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

bool estePatratPerfect(int n) {
	for (int i = 1; i <= n / 2; ++i) {
		if (i * i == n) {
			return true;
		}
	}
	return false;
}

int sumaDiv(int n) {

	int suma = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			suma += i;
		}
	}
	return suma;
}

int primaCifra(int n) {

	while (n >= 10) {
		n /= 10;
	}
	return n;
}

int cifraMin(int n) {

	int cifraMin = 99;
	while (n != 0) {
		int cifra = n % 10;
		if (cifra < cifraMin) {
			cifraMin = cifra;
		}
		n = n / 10;
	}
	return cifraMin;
}

int sumaCifrelor(int numar) {
	int suma = 0;
	while (numar != 0) {
		suma += numar % 10;
		numar /= 10;
	}
	return suma;
}

void  bubbleSortSuma(int v[], int dim) {


	bool sortat = false;


	do {


		sortat = true;

		for (int i = 0; i < dim - 1; i++) {

			if (sumaCifrelor(v[i]) > sumaCifrelor(v[i + 1])) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}

		}

	} while (sortat == false);



}

void  bubbleSortPrimaCifra(int v[], int dim) {


	bool sortat = false;


	do {


		sortat = true;

		for (int i = 0; i < dim - 1; i++) {

			if (primaCifra(v[i]) > primaCifra(v[i + 1])) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}

		}

	} while (sortat == false);



}