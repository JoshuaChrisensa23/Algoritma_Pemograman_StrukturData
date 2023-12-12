#include <iostream>
using namespace std;

//void garis(){
//	cout<<"\n-----------------------------------------\n";
//}
//
//int main(){
//	garis();
//	cout<<"\nIBI Kesatuan Bogor"<<endl;
//	garis();
//	getchar();
//	
//}

int kali (int a){
	int hasil;
	hasil = a * a;
	return hasil;
}

int main(){
	int hasil, a, b;
	cout<<"Masukan Nilai a = ";
	cin>>a;
//	cout<<"Masukan Nilai b = ";
//	cin>>b;
	
	hasil = kali(a);
	
	cout<<"Hasil Perkalian = "<<hasil<<endl;
	getchar();
}
