#include <iostream>
#include <string.h>
using namespace std;

int main(){
	struct dthms{
		char nim[9];
		char nama[15];
	};
	struct dtnil{
		float nil1;
		float nil2;
	};
	struct{
		struct dthms mhs;
		struct dtnil nil;
	}nilai;
	
	cout<<"masukan nim = ";cin>>nilai.mhs.nim;
	cout<<"masukan nama = ";cin>>nilai.mhs.nama;
	cout<<"Masukan nilai uts = ";cin>>nilai.nil.nil1;
	cout<<"Masukan nilai uas = ";cin>>nilai.nil.nil2;
	cout<<endl;
	
	cout<<"masukan nim = "<<nilai.mhs.nim;
	cout<<"masukan nama = "<<nilai.mhs.nama;
	cout<<"Masukan nilai uts = "<<nilai.nil.nil1;
	cout<<"Masukan nilai uas = "<<nilai.nil.nil2;
	cout<<endl;
	
	getchar();
}
