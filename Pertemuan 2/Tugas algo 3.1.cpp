#include <iostream>
using namespace std;

//int main(){
//	int a, b, c = 0, d = 0;
//	//clrscr()
//	cout <<"Masukan Niali a : ";
//	cin>> a;
//	cout <<"Masukan Nilai b : ";
//	cin>>b;
//	d = a * b;
//	cout <<"Hasil dari D= A+B ="<<d<<endl;
//	getchar();
//	
//}

int main (){
	int x, y, tambah, kurang, kali, bagi;
	cout<<"Masukan bilangan kesatu:"; cin>> x;
	cout<<"Masukan bilangan Kedua:"; cin>> y;
	tambah = x + y;
	kurang = x - y;
	kali = x * y;
	bagi = x / y;
	cout << "Jadi Hasil Penjumlahannya adalah:"<<tambah<<endl;
	cout << "Jadi Hasil Pengurangannya adalah:"<<kurang<<endl;
	cout << "Jadi Hasil Perkalian adalah:"<<kali<<endl;
	cout << "Jadi Hasil Pembagian adalah:"<<bagi<<endl;
	
	
	return 0;
}
