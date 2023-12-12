#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){
//	
	cout<<"===========================================\n";
	cout<<"Soal Nomor 1\n";
	
	int k, l;
	char lagi;
	
	atas :
//	clrscr();
	cout<<"\nMasukan Bilangan = ";
	cin>> k;
	
	l = k % 2;
	
	printf("Nilai %d %% 2 adalah = %d",k,l);
	printf("\n\nIngin Hitung Lagi [Y/T] : ");
	
	lagi = getche();
	
	if (lagi == 'Y' || lagi == 'y')
	goto  atas;
	
	getch();
	
	cout<<"\n\n===========================================\n";
	cout<<"Soal Nomor 2\n\n";
	
	int x, y = 0, z = 0;
	
	for(x = 1; x <= 20; x++){
		if ( x % 2 == 1){
			cout<< x;
			y = y + x;
		}
		else{
			if (x == 19 || x == 20){
			cout<< "";
			}
			else {
				cout<< " + ";
			}
		
		}
	}
	cout << " = " << y;

	cout<<"\n\n===========================================\n";
	cout<<"Soal Nomor 3\n\n";
	
	int m, n = 0, o = 0;
	
	for(m = 2; m <= 20; m++){
		if ( m % 2 == 0){
			cout<< m;
			n = n + m;
		}
		else{
			if ( m == 20){
			cout<< "";
			}
			else {
				cout<< " + ";
			}
		
		}
	}
	cout << " = " << n;
	
	cout<<"\n\n===========================================\n";
	cout<<"Soal Nomor 4\n\n";
	
	int a = 3, b = 2, c = 1, bil;
//	clrsrc();
	printf("BIL-A | BIL-B | BIL-C\n");
	printf("----------------------");
	
	for(bil = 1; bil <= 10; ++bil){
		a+=b, b+=c, c+=2;
		
		printf("\n%d\t|%d\t|%d", a,b,c);
		if(c == 13){
			break;
		}
	}
	
	getche();
	
	cout<<"\n\n===========================================\n";
	cout<<"Soal Nomor 5\n\n";
	
	int p, bl = 0;
	
	cout << "Masukan bilangan pembatas akhir : ";
	cin >> p;
	
	do {
		if (bl >= p) //fungsi break pada if adalah untuk menghentikan angka yang dikeluarkan ketika sesuai dengan syarat
		break;
		cout<<bl<<" ";
	}
	
	while (bl+=4);
	getchar();
	
	
}
