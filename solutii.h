#include "algoritmi.h"

// Să se scrie un program care ordonează crescător elementele unui vector.
void sol1() {

	int date[6] = { 8,2,9,4,5,7 };

	cout << "Nesortat: " << endl;
	afisareVec(date, 6);
	cout << endl;
	bubbleSort(date, 6);
	cout << "Sortat: " << endl;
	afisareVec(date, 6);

}

//Se dă un vector cu n elemente, numere naturale. Afișați în ordine crescătoare valorile prime din vector.
void sol2() {


	int date[7] = { 13,1,10,15,3,7,11 };

	cout << "Nesortat: " << endl;
	afisareVec(date, 7);
	cout << endl;
	bubbleSort(date, 7);
	cout << "Sortat: " << endl;
	for (int i = 0; i < 7; i++) {

		if (prim(date[i])) {
			cout << date[i] << " ";
		}
	}
}

//Se dă un vector cu n elemente, numere naturale. Afișați în ordine descrescătoare valorile divizibile cu 10 din acest vector.
void sol3() {

	int date[7] = {13,1,10,15,3,700,110};

	cout << "Nesortat: " << endl;
	afisareVec(date, 7);
	cout << endl;
	bubbleSortDesc(date, 7);
	cout << "Sortat: " << endl;
	for (int i = 0; i < 7; i++) {

		if (date[i] % 10 == 0) {
			cout << date[i] << " ";
		}

	}
}

//Se dau înălțimile a n copii, numerotați de la 1 la n, exprimate prin numere naturale. Afișați numerele de ordine ale copiilor în ordinea crescătoare a înălțimii lor.
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void sol4() {

	int date[7] = { 8,20,16,14,10,4,12 };

	cout << "Nesortat:" << endl;
	afisareVec(date, 7);
	cout << endl;
	bubbleSort(date, 7);
	cout << "Sortat: " << endl;
	afisareVec(date, 7);
	cout << endl;
	pozVector(date, 7);
}


//Se dau n numere naturale nenule. Ordonați descrescător cele n numere după numărul lor de divizori.
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void sol5() {


	int date[5] = { 12,20,4,100,13 };
	int maxDivizori = 0;
	cout << "Nesortat" << endl;
	afisareVec(date, 5);
	cout << endl;
	bubbleSortDesc(date, 5);
	cout << "Sortat: " << endl;
	for (int i = 0; i < 5; i++) {
		if (nrDiv(date[i])) {
			cout << date[i] << " ";
		}
	}

}

//Primăria dorește să realizeze un proiect de sistematizare a orașului și pentru aceasta îl angajează pe arhitectul Gigel. Orașul constă în n clădiri; pentru fiecare se cunoaște înălțimea, iar Gigel trebuie să ordoneze descrescător aceste înălțimi.
void sol6() {

	int date[5] = { 1,2,7,3,6 };
	cout << "Nesortat: " << endl;
	afisareVec(date, 5);
	cout << endl;
	bubbleSortDesc(date, 5);
	cout << "Sortat: " << endl;
	afisareVec(date, 5);

}

//Se dă un vector cu n elemente, numere naturale. Afișați în ordine descrescătoare valorile din vector care sunt prime cu ultimul element al vectorului.
void sol7() {

	int date[8] = { 16,7,6,3,1,5,9,14 };
	int ultimulElement = date[7];
	cout << "Nesortat: " << endl;
	afisareVec(date, 8);
	cout << endl;
	cout << "Sortat: " << endl;
	bubbleSortDesc(date, 8);
	for (int i = 0; i < 8; i++) {
		if (cmmdc(date[i], ultimulElement)==1) {
			cout << date[i] << " ";
		}
	}
}

//Se dă un vector cu n elemente, numere naturale și un număr k. Ordonați crescător primele k elemente ale vectorului și descrescător ultimele n-k elemente
void sol8() {

	int date[7] = { 13,1,10,15,3,7,11 };

	cout << "Nesortat: " << endl;
	afisareVec(date, 7);
	cout << endl;
	cout << "Sortat: " << endl;
	bubbleSort(date, 7);
	for (int i = 0; i < 7; i++) {
		if (date[i] != 7 && date[i] != 3) {
			cout << date[i] << " ";
		}
	}
	bubbleSortDesc(date, 7);

}

//Se dă un vector cu n elemente, numere naturale distincte. Ordonați crescător elementele situate înaintea valorii maxime din vector și descrescător elementele situate după această valoare.
void sol9() {

	int date[7] = { 13,1,10,15,3,7,11 };
	int numarMax = 0;
	int pozMax = 0;

	for (int i = 0; i < 7; i++) {
		if (date[i] > numarMax) {
			numarMax = date[i];
			pozMax = i;

		}
	}

	cout << "Nesortat: " << endl;
	afisareVec(date, 7);
	cout << endl;

	cout << "Sortat " << endl;
	bubbleSort(date, pozMax + 1);
	for (int i = 0; i <= pozMax; i++) {
		cout << date[i] << " ";
	}

	bubbleSortDesc(date, pozMax-1);
	for (int i = 0; i > pozMax; i++) {
		cout << date[i] << " ";
	}

}

//Să se ordoneze crescător elementele dintr-un şir dat cuprinse între elementul de valoare maximă şi cel de valoare minimă.
void sol10() {

	int date[5] = { 10,20,15,7,12 };
	int numarMax = date[0];
	int numarMin = date[0];
	int pozMax = 0;
	int pozMin = 0;

	for (int i = 0; i < 5; i++) {
		if (date[i] > numarMax) {
			numarMax = date[i];
			pozMax = i;

		}
	}

	for (int i = 0; i < 5; i++) {
		if (date[i] < numarMin) {
			numarMin = date[i];
			pozMin = i;

		}
	}

	cout << "Nesortat: " << endl;
	afisareVec(date,5);
	cout << endl;

	cout << "Sortat " << endl;
	bubbleSort(date, pozMax + 1);
	for (int i = 0; i < pozMax; i++) {
		cout << date[i] << " ";
	}

}

//Să se ordoneze crescător elementele pătrat perfect ale unui şir dat, fără a afecta elementele care nu sunt pătrat perfect.
void sol11() {

	int date[8] = { 9,15,16,4,5,1,7,9 };

	cout << "Nesortat: " << endl;
	afisareVec(date,8);
	cout << endl;
	cout << "Sortat " << endl;

	for (int i = 0; i < 8; i++) {
		if (!estePatratPerfect(date[i])) {
			cout << date[i] << " ";
		}
	}

	bubbleSort(date, 8);

	for (int i = 0; i < 8; i++) {
		if (estePatratPerfect(date[i])) {
			cout << date[i] << " ";
		}
	}
}

//Se dau n numere naturale. Afișați aceste numere ordonate crescător după suma divizorilor. Dacă două numere au aceeași sumă a divizorilor, se va afișa mai întâi cel mai mic.
void sol12() {

	int date[10] = { 24,46,11,36,48,35,27,28,49,6 };
	int sumaDivV[10];

	cout << "Nesortat: " << endl;
	afisareVec(date, 10);
	cout << endl;
	cout << "Sortat " << endl;

	for (int i = 0; i < 10; i++) {
		sumaDivV[i] = sumaDiv(date[i]);
	}

	bubbleSort(date, 10);

	for (int i = 0; i < 10; i++) {
		cout << date[i] << " ";
	}

}

//Se citește de la tastură un număr natural n, apoi n numere naturale. Să se afişeze cel mai mic număr care poate fi scris folosind prima cifră a numerelor citite.
void sol13() {

	int date[5] = { 100,312,276,985,502 };
	int numarNou = 0;


	bubbleSortPrimaCifra(date, 5);
	
	for (int i = 0; i < 5; i++) {
		numarNou = numarNou * 10 + primaCifra(date[i]);
	}
	cout << numarNou;

}


// Se citește de la tastură un număr natural n, apoi n numere naturale. Să se afişeze cel mai mic număr care poate fi scris folosind cifra minimă a fiecărui număr citit.
void sol14() {

	int date[5] = { 100,312,276,985,5021 };
	int numarNou = 0;

	cout << "Cea mai mica cifra a fiecarui numar: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << cifraMin(date[i]) << " ";
	}
	cout << endl;

	for (int i = 0; i < 5; i++) {
		numarNou = numarNou * 10 + cifraMin(date[i]);
	}
	cout << numarNou;
}

//Să se ordoneze descrescător elementele vectorului.

void sol15() {

	int date[6] = { 8,2,9,4,5,7 };

	cout << "Nesortat:" << endl;
	afisareVec(date, 6);
	cout << endl;
	bubbleSortDesc(date, 6);
	cout << "Sortat: " << endl;
	afisareVec(date, 6);
	
}

//Să se ordoneze crescător elementele unui vector crescător după suma cifrelor.
void sol16() {

	int date[6] = { 89,22,91,4005,51,721 };

	cout << "Nesortat:" << endl;
	afisareVec(date, 6);
	cout << endl;
	bubbleSortSuma(date, 6);
	cout << "Sortat: " << endl;
	afisareVec(date, 6);

}


//Se dă un şir cu n elemente, numere naturale nenule cu cel mult 4 cifre fiecare. Afişaţi, în ordine crescătoare, valorile pare din şir. Dacă şirul nu conţine nici o valoare pară, se va afişa mesajul nu exista.

void sol17() {

	int date[9] = { 2,3,1,4,7,2,5,8,6 };

	cout << "Nesortat:" << endl;
	afisareVec(date,9);
	cout << endl;
	bubbleSort(date, 9);
	cout << "Sortat: " << endl;
	for (int i = 0; i < 9; i++) {
		if (date[i] % 2 == 0) {
			cout << date[i] << " ";
		}
	}
}

// Să se ordoneze crescător elementele unui vector crescător după prima cifră.
void sol18() {

	int date[6] = { 89,2246,91,4005,51,721 };

	cout << "Nesortat:" << endl;
	afisareVec(date, 6);
	cout << endl;
	bubbleSortPrimaCifra(date, 6);
	cout << "Sortat: " << endl;
	afisareVec(date, 6);

}

//Să se ordoneze crescător subșirul format din elementele pare din vector și descrescător subșirul format din elementele impare. Indicii subșirului format din elementele pare nu se vor schimba. La fel și indicii subșirului format din elementele impare
void sol19() {

	int date[6] = { 8,1,9,4,5,7 };

	cout << "Nesortat:" << endl;
	afisareVec(date, 6);
	bubbleSort(date, 6);
	cout << "Sortat: " << endl;
	for (int i = 0; i < 6; i++) {
		if (date[i] % 2 == 0) {
			cout << date[i] << " ";
		}
	}
	bubbleSortDesc(date, 6);
	for (int i = 0; i < 6; i++) {
		if (date[i] % 2 != 0) {
			cout << date[i] << " ";
		}
	}
}

// Să se ordoneze crescător elementele din prima jumătate a vectorului și descrescător elementele din a doua jumătate
void sol20() {

	int date[6] = { 8,2,9,4,5,7 };

	cout << "Nesortat:" << endl;
	afisareVec(date, 6);
	bubbleSort(date, 6);
	cout << "Sortat: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << date[i] << " ";
	}
	bubbleSortDesc(date, 6);
	for (int i = 0; i > 3; i++) {
		cout << date[i] << " ";
	}
	cout << endl;
}

