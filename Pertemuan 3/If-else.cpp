#include <iostream>
using namespace std;

int main(){
//	float pendapatan, jasa = 0, komisi = 0, total = 0;
//	//clrscr();
//	cout<<"Pendapatan Hari ini Rp. "; cin>>pendapatan;
//	if (pendapatan >= 0 && pendapatan <= 200000){
//		jasa = 10000;
//		komisi = 0.1*pendapatan;
//	}
//	else {
//		if (pendapatan <= 500000){
//			jasa = 20000;
//			komisi = 0.15*pendapatan;
//		}
//		else {
//			jasa  = 30000;
//			komisi = 0.2*pendapatan;
//		}
//	}
////	menghitung total
//total = komisi + jasa;
//cout<<"Uang Jasa Rp. "<< jasa <<endl;
//cout<<"Uang Komisi Rp. "<< komisi <<endl;
//cout<<"=============================="<<endl;
//cout<<"Hasil Total Rp. "<< total <<endl;
//
//getchar();
//
//}
//
//int main(){
//	float pendapatan, jasa = 0, komisi = 0, total = 0;
//	//clrscr();
//	cout<<"Pendapatan Hari ini Rp. "; cin>>pendapatan;
//	if (pendapatan >= 0 && pendapatan <= 200000){
//		jasa = 10000;
//		komisi = 0.1*pendapatan;
//	}
//	else  if (pendapatan <= 500000){
//		jasa = 20000;
//		komisi = 0.15*pendapatan;
//		}
//	else {
//		jasa  = 30000;
//		komisi = 0.2*pendapatan;
//	}
//	
////	menghitung total
//total = komisi + jasa;
//cout<<"Uang Jasa Rp. "<< jasa <<endl;
//cout<<"Uang Komisi Rp. "<< komisi <<endl;
//cout<<"=============================="<<endl;
//cout<<"Hasil Total Rp. "<< total <<endl;
//


double total_beli, potongan  = 0, jum_bayar = 0;
//clrscr();
cout<<"Total pembelian Rp. "; cin>> total_beli;
if (total_beli >= 50000){
	potongan = 0.2 * total_beli;
}
cout<<"Besarnya Potongan Rp. "<<potongan<<endl;
jum_bayar = total_beli - potongan;
cout<<"Jumlah yang harus dibayarkan Rp. "<<jum_bayar;

getchar();
}
