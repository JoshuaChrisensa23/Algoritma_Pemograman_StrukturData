#include <iostream>
#include <string.h>
using namespace std;

struct siswa{
	int no_induk;
	string nama;
	float nilai;
};

int main(){
	siswa Arkan, Lucas;
	
	Arkan.no_induk = 1;
	Arkan.nama = "Arkan Januar";
	Arkan.nilai = 75.5;
	Lucas.no_induk = 2;
	Lucas.nama = "Lucas Laksono";
	Lucas.nilai = 89.9;
	
	cout<<Arkan.nama<<" dengan no induk "<<Arkan.no_induk<<" Mendapatkan nilai "<<Arkan.nilai<<endl;
	cout<<Lucas.nama<<" dengan no induk "<<Lucas.no_induk<<" Mendapatkan nilai "<<Lucas.nilai<<endl;
	
	return 0;
}
