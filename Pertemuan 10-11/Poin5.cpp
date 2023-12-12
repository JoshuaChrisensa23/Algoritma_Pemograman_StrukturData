#include <iostream>
using namespace std;

int main(){
	int i;
	int nilai [5];
	int *ptrnilai;
	ptrnilai = nilai;
	
	for(i=1;i<=5;i++){
		cout<<"Masukan Nilai elemen ke-"<<i<<" = ";
		cin>>nilai[i];
		
	}
	cout<<endl;
	cout<<"Hasil Pengaksesan Elemen Array Lewat";
	cout<<"Pointer";
	cout<<endl<<endl;
	for(i=1;i<=5;i++){
		cout<<"Elemen "<<i<<". Nilai"<<nilai[i];
		cout<<", Menempati Alamat memori = ";
		cout<<&ptrnilai;
		cout<<endl;	
	}
	getchar();
}
