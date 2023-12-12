#include <iostream>
using namespace std; 

int rlp(int s){
	int h1;
	h1 = s * s;
	return h1;	
}
double rll(int r){
	double h2;
	const float pi = 3.14;	
	h2 = r * r * pi;
	return h2;	
}
double rvt(int d, int t){
	double h3;
	const float pi = 3.14;
	h3 = d * d * t * pi;
	return h3;
}


void rp(int s){
	cout<<"\nMasukan Nilai sisi : ";
	cin>>s;

	cout<<"L = s x s"<<endl;
	cout<<s<<" x "<<s<<" = "<<rlp(s)<<" cm2"<<endl;
	
}
void rl(int r){
	const float pi = 3.14;	
	cout<<"Masukan Nilai Jari-Jari : ";
	cin>>r;
	
	cout<<"L = r x r x phi"<<endl;
	cout<<r<<" x "<<r<<" x "<<pi<<" = "<<rll(r)<<" cm2"<<endl;
}
void vt(int t, int d){
	const float pi = 3.14;	
	cout<<"Masukan Nilai Jari-Jari : ";
	cin>>d;
	cout<<"Masukan Nilai Tinggi : ";
	cin>>t;
	
	cout<<"L = r x r x x t phi"<<endl;
	cout<<d<<" x "<<d<<" x "<<" x "<<t<<pi<<" = "<<rvt(d,t)<<" cm2"<<endl;
}

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
		cout<<"Pilih Perhitungnan Yang Ingin Di Lakukan \n[P (Luas Persegi) | L (Luas Lingkaran) | V ( Volume Tabung)] : ";
		cin>>q;
		
		if (q == 'p' || q == 'P'){
			rp(s);
			cout<<endl;
		}
		if (q == 'l' || q == 'L'){
			rl(r);
			cout<<endl;
		}
		if (q == 't' || q == 'T'){
			vt(t,d);
			cout<<endl<<endl;
		}
		else{
			cout<<"Salah Code";
		}
		
		garis(100);
		
		cout<<"Apakah ingin menghitung ulang [Y | T] : ";
		cin>>x;
	}
	
	while(x == 'Y' || x == 'y');
	
	return 0;
}


