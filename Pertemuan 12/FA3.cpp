#include <iostream>
#include <string.h>
using namespace std;

struct siswa{
	int no_induk;
	string nama;
	float nilai;
};

int main(){
	siswa jery={1,"Jery Januar",85.5};
	siswa tono={2,"Tono Laksono",89.9};
	cout<<jery.nama<<" Mendapatkan Nilai "<<jery.nilai<<endl;
	cout<<tono.nama<<" Mendapatkan Nilai "<<tono.nilai<<endl;
	
	return 0;
}
