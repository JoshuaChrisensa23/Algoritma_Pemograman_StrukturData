#include <iostream>
using namespace std;

int main(){
	//	rumus 22/7 atau 3.14 kali jari-jari^2
	cout<<"LUAS LINGKARAN";
	float r, l;
	cout<<"\nTentukan luas dari lingkaran dengan jari jari = 70cm";
	cout<<"\njari-jari \t=" ;cin>> r;
	l = 22 * r * r /7;
	cout<<"L \t\t= 22/7 x r x r = 22/7 x "; cout<<r ; cout<<"x"; cout<<r; cout<<"\n";
	cout<<"L \t\t= "; cout<< l ; cout<<"cm\n";
	cout<<"luas dari lingkaran adalah "; cout<< l ; cout<<" cm";

	/**/
	double a, b, c, d;
	cout<<"\n\n\nSebuah lingkaran memiliki diameter 79 cm.\n";
	cout<<"Tentukan jari-jari & luas lingkaran tersebut?";
	cout<<"\n\nTentukan jari-jari tersebut?";
	cout<<"\nDiameter\t= "; cin>> a;
	cout<<"Jari-jari \t= Diameter : 2 ="; cout<< a; cout<<" : 2";
	b = a/2;
	cout<<"\nJari-jari \t= "; cout << b;
	cout<<"\n\nTentukan luas lingkaran tersebut?";
	cout<<"\njari-jari \t= " ;cin>> d;
	c = 3.14 * d * b;
	cout<<"L \t\t= 3.14 x r x r = 3.14 x "; cout<<b ; cout<<"x"; cout<<b; cout<<"\n";
	cout<<"L \t\t= "; cout<< c ; cout<<"cm\n";
	cout<<"luas dari lingkaran adalah "; cout<< c ; cout<<" cm";
	
	
	//	rumus 22/7 atau 3.14 kali jari-jari^2 kali tinggi
	cout<<"\n\n\n\nVOLUME TABUNG"; cout<<endl;
	double i, j, k, m, n;
	cout<<"Dimas memiliki celengan berbentuk tabung.\nCelengan dimas memiliki tinggi 14,5 cm dan diameter 6,5 cm"; cout<<endl;
	cout<<"Tentukan volume dari celengan dimas."; cout<<endl;
	cout<<"Diameter\t= "; cin>> i;
	cout<<"Jari-jari \t= Diameter : 2 ="; cout<< a; cout<<" : 2";cout<<endl;
	j = i/2;cout<<endl;
	cout<<"Jari-jari \t= "; cout << j;cout<<endl;cout<<endl;
	cout<<"Tentukan volume tabung.";cout<<endl;
	cout<<"Tinggi \t\t= "; cin>> k;
	cout<<"jari-jari \t= "; cin>> m;
	n = 3.14 * m * j * k;
	cout<<"V \t\t= 3.14 x r x r x t = 3.14 x"; cout<< m; cout<<"x"; cout<<j; cout<<"x"; cout<<k; cout<<endl;
	cout<<"V \t\t= "; cout<< n; cout<<"cm";
	cout<<"Volume celengan dimas adalah"; cout<<n; cout<<"cm";
	
	/**/
	double x,y,z;
	cout<<"\n\n\nSebuah botol minum berbentuk tabung memiliki \ntinggi 30 cm dan jari-jari 4.7 cm"; cout<<endl;
	cout<<"Berapakah volume air yang dapat memenuhi botol minum tersebut?"; cout<<endl;
	cout<<"Jari-jari \t= "; cin>>x;
	cout<<"Tinggi \t\t= "; cin>>y;
	z= 22 * x * x * y /7;
	cout<<"V \t\t= 22/7 x r x r x t = 22/7 x"; cout<< x; cout<<"x"; cout<<x; cout<<"x"; cout<<y; cout<<endl;
	cout<<"V \t\t= "; cout<< z; cout<<"cm"; cout<<endl;
	cout<<"Volume celengan dimas adalah"; cout<<z; cout<<"cm";;
	
	
	return 0;
}
