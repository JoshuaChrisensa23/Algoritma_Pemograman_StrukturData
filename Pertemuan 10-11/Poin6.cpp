#include <iostream>
using namespace std;

int main(){
	char band_metal[] = "SEPULTURA";
	char *band_punk = "RANCID";
	cout<<"NAMA BAND METAL = "<<band_metal<<endl;
	cout<<"Nama Band Punk = "<<band_punk;
	band_punk+=3;
	cout<<"nama band metal = "<<band_metal<<endl;
	cout<<"nama band punk = "<<band_punk;
	
	getchar();
}
