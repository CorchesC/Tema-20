#pragma once
#include <iostream>
#include <fstream>
using namespace std;



void citire(int x[100][100], int& m, int& n) {
	ifstream f("numere.txt");
	f >> m;
	f >> n;
	for (int i = 0; i < m; i++) {

		for (int j = 0; j < n; j++) {

			f >> x[i][j];
		}
	}
}
void afisare(int x[100][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
void generareMatriceSol1(int x[100][100], int m, int n) {
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 4; j++) {
			if (i < j && i + j < n - 1) {
				x[i][j] = 1;
			}
			if (i < j && i + j > n - 1) {
				x[i][j] = 2;
			}
			if (i > j && i + j > n - 1) {
				x[i][j] = 3;
			}
			if (i > j && i + j < n - 1) {
				x[i][j] = 4;
			}
			x[i][i] = 0;
			x[i][(n - 1) - i] = 0;
		}
	}
}
void generareMatriceSol2(int x[100][100], int m, int n) {
	for (int i = 0; i <= 4; i++) {
		int nr = i+1;
		for (int j = 0; j <= 4; j++) {
			if (j == 0) {
				x[i][j] = i +1;
			}
			else {
				x[i][j] = nr + 5;
				nr = x[i][j];
			}
		}
	}
}
void generareMatriceSol3(int x[100][100], int m, int n) {
		int nrMin = 1;
		for (int i = 0; i <= 4; i++) {
			for (int j = 0; j <= 4; j++) {
				if (i % 2 == 0) {
					x[i][j] = nrMin;
					nrMin++;
				}
				if (i % 2 != 0) {
					x[i][(n-1)-j] = nrMin;
					nrMin++;
				}
			}
		}
}
void generareMatriceSol4(int x[100][100], int m, int n) {
	for (int i = 0; i <= 5; i++) {
		for (int j= 5; j >= 0;j--) {
			x[i][j] = m - ((j+1) - (i+1));
		}
	}
}
void generareMatriceSol5(int x[100][100], int m, int n) {
	for (int i = 0; i <= 5; i++) {
		int nr = 0;
		for (int j = 0; j <= 2; j++) {
			if (i == 0 || i == 5) {
				x[i][j] = nr;
				x[i][(n - 1) - j] = nr;
				nr++;
			}
			if (i == 1 || i == 4) {
				x[i][j] = nr + 1;
				x[i][(n - 1) - j] = nr + 1;
				nr++;
			}
			if (i == 2 || i == 3) {
				x[i][j] = nr + 2;
				x[i][(n - 1) - j] = nr + 2;
				nr++;
			}
		}
	}
}
void generareMatriceSol6(int x[100][100], int m, int n) {
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= 5; j++) {
			if (i == 0 || i == 3) {

			}
			if (i == 1 || i == 4) {
		
			}
			if (i == 2 || i == 5) {
			
			}
		}
	}
		
}
void generareMatriceSol7(int x[100][100], int m, int n) {
	for (int i = 4; i >= 0; i--) {
		for (int j =0 ; j < 5; j++) {
			if (i == 4 || j == 0) {
				x[i][j] = 5;
			}
			else {
				x[i][j] = x[i - 1][j + 1] + x[i][j - 1];
			}
		}
	}
}
void afisareChar(int x[100][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			char f = x[i][j];
			cout << f << " ";
		}
		cout << endl;
	}
}
void generareMatriceSol8(int x[100][100], int m, int n) {
	for (int i = 0; i <= 6; i++) {
		for (int j = 0; j <= 6; j++) {
			if (j == 0 || j == 6) {
				x[i][j] = '*';
			}
			else if (i <= 3 && (j + i == 6 ||i == j)) {
				x[i][j] = '*';
			}
			else {
				x[i][j] = '-';
			}
		}
	}
		
}
void generareMatriceSol9(int x[100][100], int m, int n) {
	for (int i = 0; i <= 3; i++) {
		for (int j = 0; j <= 3; j++) {
			if (i == 0 || j == 0) {
				x[i][j] = 1;
				x[(n - 1) - i][j] = 1;
				x[i][(n - 1) - j] = 1;
				x[(n - 1) - i][(n - 1) - j] = 1;
			}
			if ((i == 1 && j != 0) || (j == 1 && i != 0)) {
				x[i][j] = 2;
				x[(n - 2) - i][j] = 2;
				x[i][(n - 2) - j] = 2;
				x[(n - 2) - i][(n - 1) - j] = 2;
			}
			if ((j == 2 && (j != 1 && j != 0)) || (j == 1 && (i != 0 || i != 1))) {
				x[i][j] = 3;
				x[(n - 3) - i][j] = 3;
				x[i][(n - 3) - j] = 3;
				x[(n - 3) - i][(n - 1) - j] = 3;
			}
		}
	}
	
}
void generareMatriceSol10(int x[100][100], int m, int n) {
	for (int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			if (i == j) {
				x[i][j] = 'A';
			}
			else if (i < j) {
				x[i][j] = x[i][j-1] + 1;
			}
			else if (j == 0) {
				x[i][j] = x[i-1][4];
			}
			else {
				x[i][j] = x[i][j - 1] + 1;
			}
		}
	}
		 
}
void generareMatriceSol11(int x[100][100], int m, int n) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == 0 || j == 0) {
				x[i][j] = 2;
			}
			else {
				x[i][j] = x[i - 1][j] + x[i][j - 1];
			}
		}
	}
}
void generareMatriceSol12(int x[100][100], int m, int n) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i % 2 == 0) {
				if (j < 2) {
					x[i][j] = 'a';
				}
				else {
					x[i][j] = 'b';
				}
			}
			if (i % 2 != 0) {
				if (j < 2) {
					x[i][j] = 'A';
				}
				else {
					x[i][j] = 'B';
				}
			}
		}
	}

}
void generareMatriceSol13(int x[100][100], int m, int n) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i == j) {
				x[i][j] = 1;
			}
			else if (i + j == 3) {
				x[i][j] = 7;
			}
			else {
				x[i][j] = j + 1;
			}
		}
	}
}
void generareMatriceSol14(int x[100][100], int m, int n) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				x[i][j] = 'a';
			}
			else if (i < j) {
				x[i][j] = x[i][j - 1] + 1;
			}
			else if (j == 0) {
				x[i][j] = x[i - 1][j] + 1;
			}
			else {
				x[i][j] = x[i][j - 1] - 1;
			}
		}
	}
}
void generareMatriceSol15(int x[100][100], int m, int n) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == 0) {
				if (j < 4) {
					x[i][j] = j + 1;
				}
				else {
					x[i][j] = -2;
				}
			}
			else if (j == 4) {
				x[i][j] = -2;
			}
			else {
				x[i][j] = x[i - 1][j] + x[i - 1][j + 1];
			}
		}
	}
}