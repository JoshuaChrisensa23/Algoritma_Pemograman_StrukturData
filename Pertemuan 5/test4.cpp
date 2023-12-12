#include <iostream>
using namespace std;

int main(){
/*
	int awal, akhir, z;
	
	cout<<"Masukan Awal : ";
	cin>> awal;
	cout<<"Masukan Akhir : ";
	cin>> akhir;
	
	z = awal;
	
	while ( z >= akhir ){
		cout << z << ". Saya Senang"<< endl;;
		z--;
	}
*/


	int x, bil = 0;
	cout << "Masukan bilangan pembatas akhir : ";
	cin >> x;
	
	do{
		if ( bil >= x)
		break;
	}
	
	while (bil+=4);
	
	getchar ();
}
