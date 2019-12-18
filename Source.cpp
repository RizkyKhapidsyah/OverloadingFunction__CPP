#include <iostream>
#include <conio.h>

using namespace std;

//Overloading = Menimpa

//Basic Function
int Luas_Kotak(int Panjang, int Lebar) 
{
	int Luas;
	Luas = Panjang * Lebar;
	return Luas;
}

//Overloading Function I
int Luas_Kotak(int Sisi) 
{
	int Luas;
	Luas = Sisi * Sisi;
	return Luas;
}

//Overloading Function II
double Luas_Kotak(double Sisi)
{
	double Luas;
	Luas = Sisi * Sisi;
	return Luas;
}

int main()
{
	cout << "Luas Kotak 2x3      = " << Luas_Kotak(2, 3) << endl;
	cout << "Luas Kotak 2x2      = " << Luas_Kotak(2) << endl;
	cout << "Luas Kotak 2.5x2.5  = " << Luas_Kotak(2.5) << endl;

	_getch();
	return 0;
}
