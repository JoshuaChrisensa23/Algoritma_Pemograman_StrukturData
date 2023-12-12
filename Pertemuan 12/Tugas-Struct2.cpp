#include <iostream>
#include <conio.h>
using namespace std;

struct mh{
	char nama[20], matkul[15];
	int nim, sk;
};

int main(){	
	int va[2], tp[2];
	mh dt[2];
		
	for(int l = 0; l < 2; ++l){
		cout<<"Nama Mahasiswa  :\t";
		cin>>dt[l].nama;
		cout<<"NIM\t\t:\t";
		cin>>dt[l].nim;
		cout<<"Mata Kuliah\t:\t";
		cin>>dt[l].matkul;
		cout<<"Jumlah SKS\t:\t";
		cin>>dt[l].sk;
//		cout<<"SPP Tetap\t:\t"<<endl;
//		cout<<"SPP Variabel\t:\t"<<endl;
		if(dt[l].sk == 0){
			tp[l] = 250000;
			va[l] = dt[l].sk*tp[l];
		}
		else{
			if(dt[l].sk == 2){
				tp[l] = 300000;
				va[l] = dt[l].sk*tp[l];
			}
		}
		cout<<endl<<"-----------------------------------"<<endl;	
	}
	
	cout<<endl<<"---------------------------------------------"<<endl;
	cout<<endl<<"\t\tOutput\t\t"<<endl;
	cout<<endl<<"---------------------------------------------"<<endl;
	
	
	for(int l = 0; l < 2; ++l){
		cout<<"Nama Mahasiswa  :\t"<<dt[l].nama<<endl;
		cout<<"NIM\t\t:\t"<<dt[l].nim<<endl;
		cout<<"Mata Kuliah\t:\t"<<dt[l].matkul<<endl;
		cout<<"Jumlah SKS\t:\t"<<dt[l].sk<<endl;
		cout<<"SPP Tetap\t:\t"<<tp[l]<<endl;
		cout<<"SPP Variabel\t:\t"<<va[l]<<endl;
		cout<<"-----------------------------------\n";	
	}
	
}
