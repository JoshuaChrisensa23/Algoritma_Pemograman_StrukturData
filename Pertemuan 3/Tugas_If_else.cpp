#include <iostream>
using namespace std;

int main(){
	int  a, b, c, r;
	string nm;
	cout<<"Masukan Nama Anda : "; 
	getline(cin,nm);
//	cin>> nm;
	cout<<"Masukan Nilai Pertandingan 1 : ";
	cin>> a;
	cout<<"Masukan Nilai Pertandingan 2 : "; 
	cin>> b;
	cout<<"Masukan Nilai Pertandingan 3 : "; 
	cin>> c;
	
	r = (a + b + c)/3;
	
	cout<<"\n\n\tSiswa yang bernama "<<nm;
	cout<<"\nMendapat Nilai Rata-Rata Pertandingan "<<r;
	if (r>=85){
		cout<<"\nMemperoleh Hadiah Komputer Core I5";
	}
	else {
		if (r>=70){
			cout<<"\nMemperoleh Hadiah Uang Sebesar Rp. 2.500,000";
		}
		else {
			cout<<"\nMemperoleh Hadiah Hiburan.";
		}
	}
	
	getchar();
}
