#include <iostream>
using namespace std;

int tambahkanArray(const int* arr, int ukuran){
	int hasil = 0;
	for(int i = 0; i<ukuran; ++i){
		hasil+= *arr;
		arr++;
	}
	return hasil;
}
int main(){
	int ukuran, p;
	cout<<"Masukan Ukuran Array : ";
	cin>>ukuran;
	
	int arrayAngka[ukuran];
	cout<<"Masukna elemen array : "<<endl;
	for(int i = 0; i < ukuran; i++){
		cout<<"Elemen Ke-"<<i<<": ";
		cin>>arrayAngka[i];	
		p = p + arrayAngka[i];
	}
	
	int total = tambahkanArray(arrayAngka, ukuran);
	cout<<"Hasil Penjumlahan Array: "<<total<<endl;
}
