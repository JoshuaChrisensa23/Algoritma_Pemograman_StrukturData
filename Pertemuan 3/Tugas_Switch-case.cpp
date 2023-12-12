#include <iostream>
using namespace std;

int main(){
	int  a, b, c, r, f, g, h;
	string nm;
	cout<<"Masukan Nama Anda : "; (cin,nm);
//	cin>> nm;
	cout<<"Masukan Nilai Pertandingan 1 : ";
	cin>> f;
	cout<<"Masukan Nilai Pertandingan 2 : "; 
	cin>> g;
	cout<<"Masukan Nilai Pertandingan 3 : "; 
	cin>> h;
	
	r = (f+g+h)/3;
	
	cout<<"Siswa yang bernama "<<nm;
	cout<<"\nMendapat Nilai Rata-Rata Pertandingan "<<r;
	switch (r) {
		case 85 ...100 : 
			cout<<"\nMemperoleh Hadiah Komputer Core I5";
		break;
		
		case 70 ...84 : 
			cout<<"\nMemperoleh Hadiah Uang Sebesar Rp. 2.500,000";
		break;
		
		default : 
			cout<<"\nMemperoleh Hadiah Hiburan";
		break;
	}
	
	getchar();
}
