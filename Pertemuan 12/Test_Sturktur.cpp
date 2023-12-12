#include <iostream>
#include <string.h>
using namespace std;

struct mhs{
	string nama;
	int umur;
	float ipk;
};

float hitung(mhs mahasiswa[], int jumlah){
	float total = 0;
	for(int i = 0; i < jumlah; ++i){
		total = total + mahasiswa[i].ipk;
	}
	return total/jumlah;
}

int main(){
	const int jumlah = 3;
	mhs daftar[jumlah]; 
	 
	 
	
	for(int i = 0; i < jumlah; ++i){
		cout<<"Masukan Nama mahasiswa "<<i+1<<" = ";
		cin>>daftar[i].nama;
		cout<<"Umur mahasiswa "<<i+1<<" = ";
		cin>>daftar[i].umur;
		cout<<"IPK mahasiswa "<<i+1<<" = ";
		cin>>daftar[i].ipk;
	}
	
	cout<<"\n\nData Mahasiswa : \n";
	for(int i = 0; i < jumlah; ++i){
		cout<<"Masukan Nama mahasiswa "<<i+1<<" "<<daftar[i].nama<<endl;
		cout<<"Umur mahasiswa "<<i+1<<" "<<daftar[i].umur<<endl;
		cout<<"IPK mahasiswa "<<i+1<<" "<<daftar[i].ipk<<endl;
	}
	
	float ratarata = hitung(daftar, jumlah);
	cout<<"\nRata-rata IPK = "<<ratarata;
}
