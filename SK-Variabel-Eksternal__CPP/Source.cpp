/* ------------------------------ */
/* Variabel Eksternal atau Global */
/* ------------------------------ */

#include <iostream>
#include <conio.h>

/* Created by Rizky Khapidsyah*/

using namespace std;

int a = 9; //deklarasi variabel eksternal

void lokal();

void main() {
	cout << "Penggunaan Variabel Eksternal" << endl;
	cout << "\nNilai didalam funsi main() = : " << a;

	lokal(); //pemanggilan fungsi lokal
	
	cout << "\nNilai Setelah penggilan fungsi local() = ";
	cout << a;
	
	_getch();
}

void lokal() {
	a += 4;
}