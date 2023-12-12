#include <iostream>
using namespace std;

//void penjumlahan(int &total){
//	total = total + 1;
//}
//
//int main(){
//	int hitung = 20, result = 0;
//	
//	penjumlahan(hitung);
//	
//	cout<<"---Pass  by Reference---\n";
//	cout<<"total = ";
//	cout<<hitung;
//	
//	return 0;
//}

void kata(string *d, string *a){
	cout<<"Alamat Kata : "<<&d<<"\t"<<&a<<endl;
	cout<<"Kata   \t: "<<*d<<"\t"<<*a;
}

int main(){
	string b, c;
	
	cout<<"Masukan Kata : "<<endl;
//	cin>>b;
	getline(cin,b);
	getline(cin,c);
	cout<<endl;
	
	kata(&b,&c);
	
}
