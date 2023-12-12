#include <iostream>
using namespace std;

int main(){
	int a, b, c, d, e, f, g, h;
	
	cout<<"Masukan Alas \t: ";
	cin>>a;
	cout<<"Masukan Tinggi \t: ";
	cin>>b;
	
	d = a % 2;
	
	if(d == 0){
		f = d + 9;
		cout <<"Alas : " << f << endl;
	}
	else{
		f = d + 2;
		cout <<"Alas : " << f << endl;
	}
	
	if(b < 10){
		g = b * 3;
		cout<<"Tinggi : " << g <<endl;		
	}
	else{
		if(b > 30){
			g = b / 2;
			cout<<"Tinggi : " << g << endl;
		}
		else {
			g == b;
			cout<<"Tinggi : " << g <<endl;
		}
	}
	
	h = (f*g)/2;
	
	cout<<"Luas = Alas x Tinggi / 2 = "<< h <<endl;
	cout<<"Luas Adalah "<< h <<endl;
}
