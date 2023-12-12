#include <iostream>
using namespace std; 

int rlp(int s){
	int h1;
	h1 = s * s;
	
	cout<<"L = "<<s<<" x "<<s<<endl;
	cout<<"Luas Pesergi = "<<h1<<" cm2"<<endl;
	
	return -1; 
};

float rll(int r){
	int h2;
	const float pi = 3.14;
	
	h2 = r * r * pi;
//	cout<<r<<" x "<<r<<" x "<<pi<<" = "<<r * r * pi;
	
	return h2;
};

float rvt(int d, int t){
	int h3;
	const float pi = 3.14;
	
	h3 = d * d * t * pi;
//	cout<<d<<" x "<<d<<" x "<<t<<" x "<<pi<<" = "<<d * d * t * pi;
	
	return h3;
};

void garis(int n){
	int i;
	cout<<endl;
	for(i = 0; i <= n; i++){
		cout<<"=";
	}
	cout<<endl;
}

int main(){
	char q, p, x;
	int s, r, t, d;
	
	
	do{
		garis(100);
//		cout<<"Pilih Perhitungnan Yang Ingin Di Lakukan \n[P (Luas Persegi) | L (Luas Lingkaran) | V ( Volume Tabung)] : ";
//		cin>>q;
		
	
			cout<<"\nMasukan Nilai sisi : ";
			cin>>s;
			cout<<rlp(s)<<endl<<endl;
			cout<<"Masukan Nilai Jari-Jari : ";
			cin>>r;
			cout<<rll(r)<<endl<<endl;
			cout<<"Masukan Nilai Jari-Jari : ";
			cin>>d;
			cout<<"Masukan Nilai Tinggi : ";
			cin>>t;
			cout<<rvt(t,d)<<endl<<endl;
		
		
		garis(100);
		
		cout<<"Apakah ingin menghitung ulang [Y | T] : ";
		cin>>x;
	}
	
	while(x == 'Y' || x == 'y');
}


