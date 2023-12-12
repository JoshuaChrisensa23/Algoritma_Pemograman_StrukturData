#include <iostream>
#include <string.h>
using namespace std;



int main(){
	struct mhs{
	 	char nim[9];
	 	char nama[15];
	 	float nilai;
	};
	 
	mhs mahasiswa;
	cout<<"Masukan Nim = ";
	cin>>mahasiswa.nim;
	cout<<"masukan NAMA = ";
	cin>>mahasiswa.nama;
	cout<<"Masukan Nilai";
	cin>>mahasiswa.nilai;
	 
	cout<"\nMasukan data yang di input : \n\n";
	cout<<"NIM"<<mahasiswa.nim<<endl;
	cout<<"Nama"<<mahasiswa.nama<<endl;
	cout<<"Nilai"<<mahasiswa.nilai<<endl;
	
	getchar();
}
