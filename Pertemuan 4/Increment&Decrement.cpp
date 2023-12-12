/*Increment & decrement
++
--
*/

#include <iostream>
using namespace std;

int main(){
	

//	int x,y;
//	
//	x = 1;
//	cout << x <<endl;
////	x += 1;
//	x++;
//	cout<< ++x ;
//	
//	cout<<"====================="<<endl;
//	
//	y=1;
//	cout << y << endl;
//	++y;
//	cout<<++y;

//	int awal, akhir;
//		cout<<"Mulai berapa : "; cin>> awal;
//		cout<<"Sampai berapa : "; cin>> akhir;
//		
//		for(int a = awal; a <= akhir; a++){
//			cout<<a<<". saya senang"<<endl;
//			
//			for(int b=awal; b<=a; b++){
//				cout<<b<<". p"<<endl;
//		}
//		
//	}

//	int a,b,bintang;
//	
//	cout<<"Berapa jumlah bintang : ";
//	cin>>bintang;
//	
//	for(a=0;a<=bintang;a++){
//		for(b=0;b<=a;b++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}

//	int a,b;
////clrscr;
//	for(a = 0; a <= 30; a++){
//		cout << endl;
//		for(b=a; b<= ++a; b++){
//			cout<<a<<" "; 
//		}
//	}
//	
//	getchar();

	int a,i,j,k;
	cout<<"Input lebar belah ketupat : ";
	cin>>a;
	cout<<endl;
	
	for(i=1;  i<=a; i++){
		for(j=1; j<=a-i; j++){
			cout<<" ";
		}
		for(k=1;k<=i;k++){
			cout<<" *";
		}
		cout<<endl;
	}
	
	for(i=1; 1<a; i++){
		for(j=1; j<=a; j++){
			cout<<" ";
		}
		cout<<endl;
	}
	
	for(i=1;i<a; i++){
		for(j=1; j<=i; j++){
			cout<<" ";
		}
		for(k=1; k<=a-i; k++){
			cout<<" *";
		}
		cout<<endl;
	}
	return 0;


}	

	

