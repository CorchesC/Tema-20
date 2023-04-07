#pragma once
#include "functii.h"
using namespace std;

void sol1() {
	//In secventa de instructiuni de mai jos varabilele i si j sunt de tip intreg, iar variabila A memoreaza un tablou bidimensional cu 5 linii si 5 coloane, numerotate de la 1 la 5.
	//Elementele tabloului sunt numere integi. Elementele tabloului sunt numere integi. Fara a utiliza alte variabile, scrieti una sau mai multe instructiuni care pot inlocui punctele de suspensie astfel incat in urma executarii mai secventei obtinute, tabloul memorat in variabila A sa aiba elementele din figura de mai jos.
	// for (int i = 1; i,=5; i++)
		// for (int (j= 1; j<=5;j++)
	// 0 1 1 1 0
	// 4 0 1 0 2
	// 4 4 0 2 2
	// 4 0 3 0 2
	// 0 3 3 3 0
	int x[100][100], m = 5, n = 5;
	generareMatriceSol1(x, m, n);
	afisare(x, m, n);
}
void sol2() {
	//In secventa de instructiuni de mai jos varabilele i si j sunt de tip intreg, iar variabila A memoreaza un tablou bidimensional cu 5 linii si 5 coloane, numerotate de la 1 la 5.
	//Elementele tabloului sunt numere integi. Elementele tabloului sunt numere integi. Fara a utiliza alte variabile, scrieti una sau mai multe instructiuni care pot inlocui punctele de suspensie astfel incat in urma executarii mai secventei obtinute, tabloul memorat in variabila A sa aiba elementele din figura de mai jos.
	// for (int i = 1; i,=5; i++)
		// for (int (j= 1; j<=5;j++)
	// 1 6   11 16 21
	// 2 7   12 17 22
	// 3 8   13 18 23
	// 4 9   14 19 24
	// 5 10  15 20 25
	int x[100][100], m = 5, n = 5;
	generareMatriceSol2(x, m, n);
	afisare(x, m, n);
}
void sol3() {
	//In secventa de instructiuni de mai jos varabilele i si j sunt de tip intreg, iar variabila A memoreaza un tablou bidimensional cu 5 linii si 5 coloane, numerotate de la 1 la 5.
	//Elementele tabloului sunt numere integi. Elementele tabloului sunt numere integi. Fara a utiliza alte variabile, scrieti una sau mai multe instructiuni care pot inlocui punctele de suspensie astfel incat in urma executarii mai secventei obtinute, tabloul memorat in variabila A sa aiba elementele din figura de mai jos.
	// for (int i = 1; i,=5; i++)
		// for (int (j= 1; j<=5;j++)
	// 1  2 3 4 5
	// 10 9 8 7 6
	// 11 12 13 14 15
	// 16 17 18 19 20
	// 25 24 23 22 21 
	int x[100][100], m = 5, n = 5;
	generareMatriceSol3(x, m, n);
	afisare(x, m, n);
}
void sol4() {
	//In secventa de instructiuni de mai jos varabilele i si j sunt de tip intreg, iar variabila A memoreaza un tablou bidimensional cu 5 linii si 5 coloane, numerotate de la 1 la 5.
	//Elementele tabloului sunt numere integi. Elementele tabloului sunt numere integi. Fara a utiliza alte variabile, scrieti una sau mai multe instructiuni care pot inlocui punctele de suspensie astfel incat in urma executarii mai secventei obtinute, tabloul memorat in variabila A sa aiba elementele din figura de mai jos.
	// for (int i = 0; i <=5; i++)
		// for (int j= 5; j >= 0;j--)
	// 6 5 5 5 5 5
	// 5 6 3 2 1 0
	// 3 3 6 3 3 3
	// 5 4 3 6 1 0
	// 5 4 3 2 1 6
	int x[100][100], m = 5, n = 6;
	generareMatriceSol4(x, m, n);
	afisare(x, m, n);

}
void sol5() {
	//In secventa de instructiuni de mai jos varabilele i si j sunt de tip intreg, iar variabila A memoreaza un tablou bidimensional cu 5 linii si 5 coloane, numerotate de la 0 la 5.
	//Elementele tabloului sunt numere integi. Elementele tabloului sunt numere integi. Fara a utiliza alte variabile, scrieti una sau mai multe instructiuni care pot inlocui punctele de
	// for (int i = 0; i <=5; i++)
		//	for (int j = 0; j<=2; j++)
	int x[100][100], m = 6, n = 6;
	generareMatriceSol5(x, m, n);
	afisare(x, m, n);
}
void sol6() {
	//In secventa de instructiuni de mai jos varabilele i si j sunt de tip intreg, iar variabila A memoreaza un tablou bidimensional cu 6 linii si 6 coloane, numerotate de la 1 la 6.
	//Elementele tabloului sunt numere integi. Elementele tabloului sunt numere integi. Fara a utiliza alte variabile, scrieti una sau mai multe instructiuni care pot inlocui punctele de
	// for (int i = 1; i <=6; i++)
		//	for (int j = 1; j<=; j++)
	// 2 3 1 2 3 1
	// 2 6 2 3 6 2
	// 1 2 0 1 2 0
	// 2 3 1 2 3 1
	// 1 2 0 1 2 0
	int x[100][100], m = 6, n = 6;
	generareMatriceSol6(x, m, n);
	afisare(x, m, n);
}
void sol7() {
	//In secventa de instructiuni de mai jos varabilele i si j sunt de tip intreg, iar variabila A memoreaza un tablou bidimensional cu 5 linii si 5 coloane, numerotate de la 0 la 5.
	//Elementele tabloului sunt numere integi. Elementele tabloului sunt numere integi. Fara a utiliza alte variabile, scrieti una sau mai multe instructiuni care pot inlocui punctele de
	// for (int i = 5; i >=1; i--)
		//	for (int j = 1; j<6; j++)
	int x[100][100], m = 5, n = 5;
	generareMatriceSol7(x, m, n);
	afisare(x, m, n);
}
void sol8() {
	//In secventa de instructiuni de mai jos varabilele i si j sunt de tip intreg, iar variabila A memoreaza un tablou bidimensional cu 7 linii si 7 coloane, numerotate de la 0 la 6.
	//Elementele tabloului sunt numere integi. Elementele tabloului sunt numere integi. Fara a utiliza alte variabile, scrieti una sau mai multe instructiuni care pot inlocui punctele de
	// for (int i = 0; i <=6; i++)
		//	for (int j = 0; j<=6; j++)
	int x[100][100], m = 7, n = 7;
	generareMatriceSol8(x, m, n);
	afisareChar(x, m, n);
}
void sol9() {
	//In secventa de instructiuni de mai jos varabilele i si j sunt de tip intreg, iar variabila A memoreaza un tablou bidimensional cu 6 linii si 6 coloane, numerotate de la 1 la 6.
	//Elementele tabloului sunt numere integi. Elementele tabloului sunt numere integi. Fara a utiliza alte variabile, scrieti una sau mai multe instructiuni care pot inlocui punctele de
	// for (int i = 1; i <=3; i++)
		//	for (int j = 1; j<=3; j++)
	// 1 1 1 1 1 1
	// 1 2 2 2 2 1
	// 1 2 3 3 2 1
	// 1 2 3 3 2 1
	// 1 2 2 2 2 1
	// 1 1 1 1 1 1 
	int x[100][100], m = 6, n = 6;
	generareMatriceSol9(x, m, n);
	afisare(x, m, n);
}
void sol10() {
	//In secventa de instructiuni de mai jos varabilele i si j sunt de tip intreg, iar variabila A memoreaza un tablou bidimensional cu 5 linii si 5 coloane, numerotate de la 0 la 4.
	//Elementele tabloului sunt numere integi. Elementele tabloului sunt numere integi. Fara a utiliza alte variabile, scrieti una sau mai multe instructiuni care pot inlocui punctele de
		// for (int i = 0; i < 5; i++)
		// for (int j= 0; j< 5;j++)
	int x[100][100], m = 5, n = 5;
	generareMatriceSol10(x, m, n);
	afisareChar(x, m, n);
}
void sol11() {
	//In secventa de instructiuni de mai jos varabilele i si j sunt de tip intreg, iar variabila A memoreaza un tablou bidimensional cu 5 linii si 5 coloane, numerotate de la 0 la 4.
	//Elementele tabloului sunt numere integi. Elementele tabloului sunt numere integi. Fara a utiliza alte variabile, scrieti una sau mai multe instructiuni care pot inlocui punctele de
		// for (int i = 0; i < 5; i++)
		// for (int j= 0; j< 5;j++)
	int x[100][100], m = 5, n = 5;
	generareMatriceSol11(x, m, n);
	afisare(x, m, n);
}
void sol12() {
	//In secventa de instructiuni de mai jos varabilele i si j sunt de tip intreg, iar variabila A memoreaza un tablou bidimensional cu 4 linii si 4 coloane, numerotate de la 0 la 3.
	//Elementele tabloului sunt numere integi. Elementele tabloului sunt numere integi. Fara a utiliza alte variabile, scrieti una sau mai multe instructiuni care pot inlocui punctele de
		// for (int i = 0; i < 4; i++)
		// for (int j= 0; j< 4;j++)
	int x[100][100], m = 4, n = 4;
	generareMatriceSol12(x, m, n);
	afisareChar(x, m, n);
}
void sol13() {
	//In secventa de instructiuni de mai jos varabilele i si j sunt de tip intreg, iar variabila A memoreaza un tablou bidimensional cu 4 linii si 4 coloane, numerotate de la 0 la 3.
	//Elementele tabloului sunt numere integi. Elementele tabloului sunt numere integi. Fara a utiliza alte variabile, scrieti una sau mai multe instructiuni care pot inlocui punctele de
		// for (int i = 0; i < 4; i++)
		// for (int j= 0; j< 4;j++)
	int x[100][100], m = 4, n = 4;
	generareMatriceSol13 (x, m, n);
	afisare(x, m, n);
}
void sol14() {
	//In secventa de instructiuni de mai jos varabilele i si j sunt de tip intreg, iar variabila A memoreaza un tablou bidimensional cu 5 linii si 5 coloane, numerotate de la 0 la 4.
	//Elementele tabloului sunt numere integi. Elementele tabloului sunt numere integi. Fara a utiliza alte variabile, scrieti una sau mai multe instructiuni care pot inlocui punctele de
		// for (int i = 0; i < 5; i++)
		// for (int j= 0; j< 5;j++)
	int x[100][100], m = 5, n = 5;
	generareMatriceSol14(x, m, n);
	afisareChar(x, m, n);
}
void sol15() {
	//In secventa de instructiuni de mai jos varabilele i si j sunt de tip intreg, iar variabila A memoreaza un tablou bidimensional cu 5 linii si 5 coloane, numerotate de la 0 la 4.
	//Elementele tabloului sunt numere integi. Elementele tabloului sunt numere integi. Fara a utiliza alte variabile, scrieti una sau mai multe instructiuni care pot inlocui punctele de
		// for (int i = 0; i < 5; i++)
		// for (in	int x[100][100], m = 5, n = 5;
	int x[100][100], m = 5, n = 5;
	generareMatriceSol15(x, m, n);
	afisare(x, m, n);

}