#include <iostream>
using namespace std;

struct emp { //struct berfungsi untuk mendeklarasikan beberapa variabel dalam sebuah kelompok
	int hasil1, hasil2, hasil3;
	char Nama[40];
}obj[3]; //obj adalah nama yang berguna untuk memanggil sturktur yang diperlukan (nama bisa bebas) dengan array 3 kolom

struct inp{
//	char jenis[40];
	int banyak;
//	int harga [3] = {2.500,2.000,1.500};
}jns[3];

int main (){
	int b;
	string c [3]= {"\tPrinter","\tMouse","Kabel Data"}; //mendeklarasikan nama barang berupa kata 
	
	for(b = 0; b < 3; b++){
		cout<<"Hasil penjualan "<<b+1<<endl<<"Hasil1, Hasil2, Hasil3 :\n";
		cin>>obj[b].hasil1>>obj[b].hasil2>>obj[b].hasil3; //melakukan input lebih dari 3 secara sekaligus tanpa perl perintah cin & obj[b]. untuk memanggil sturktur sesuai keperluan
	}
	
	cout<<"=========================================================="<<endl;
	cout<<"No\tNama Barang\t 2001  \t    2002   \t     2003"<<endl;
	cout<<"=========================================================="<<endl;
	
	for(b = 0; b < 3; b++){
		cout<<b+1<<"    "<<c[b]<<"\t\t"<<obj[b].hasil1<<"\t\t"<<obj[b].hasil2<<"\t\t"<<obj[b].hasil3<<endl; //obj[b]. untuk memanggil sturktur sesuai keperluan dan angka array
	}
	cout<<"========================================================="<<endl;
	
	
	cout<<"\n\n\n\t\t\tPerthitungan Matriks"<<endl<<endl;
	cout<<"\n======================Penjumlahan &Pengurangan Matriks======================"<<endl<<endl;
	int matriks1[10][10], matriks2[10][10], hasil[10][10]; //Nama_variable[i][j] harus ada jika ingin melakukan input untuk array
	int t, u, v, w, x, y, z, jumlah = 0;
	
	getchar;
	
	cout<<"Masukan Jumlah Baris \t:";
	cin>>w;
	cout<<"Masukan Jumlah Kolom \t:";
	cin>>y;
	
	cout<<"masukan elemen matriks1 : "<<endl;
	for(x = 0; x < w; x++){
		cout<<"Masukan elemen Baris : "<<x+1<<endl;
		for(z = 0; z < y; z++){
			cin>>matriks1[x][z];
		}
	}
	
	cout<<"masukan elemen matriks2 : "<<endl;
	for(x = 0; x < w; x++){
		cout<<"Masukan elemen Baris : "<<x+1<<endl;
		for(z = 0; z < y; z++){
			cin>>matriks2[x][z];
		}
	}
	
	cout<<endl<<"--------------------------------------------"<<endl;
	
//	cout<<"\t\t";
	for(x = 0; x < w; x++){
		for(z = 0; z < y; z++){
			cout<<matriks1[x][z]<<" ";
		}
		cout<<"\t\t";
		for(z = 0; z < y; z++){
			cout<<matriks2[x][z]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Penjumlahan 2 elemen matriks : "<<endl;
	for(x = 0; x < w; x++){
		for(z = 0; z < y; z++){
			hasil[x][z] = matriks1[x][z] + matriks2 [x][z];
			cout<<hasil[x][z]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"\n======================Pengurangan Matriks======================"<<endl<<endl;

	cout<<"Pengurangan 2 elemen matriks : "<<endl;
	for(x = 0; x < w; x++){
		for(z = 0; z < y; z++){
			hasil[x][z] = matriks1[x][z] - matriks2 [x][z];
			cout<<hasil[x][z]<<" ";
		}
		cout<<endl;
	}
	
	
	cout<<"\n====================== Perkalian Matriks ======================"<<endl<<endl;
	
	cout<<"Masukan Jumlah Baris Matriks 1\t:";
	cin>>w;
	cout<<"Masukan Jumlah Kolom Matriks 1\t:";
	cin>>y;
	
	cout<<"Masukan Jumlah Baris Matriks 2\t:";
	cin>>v;
	cout<<"Masukan Jumlah Kolom Matriks 2\t:";
	cin>>u;
	
	if(y != v){
    cout << "Matriks tidak dapat dikalikan satu sama lain\n";
  	}
	else{
		cout<<"masukan elemen matriks1 : "<<endl;
		for(x = 0; x < w; x++){
			cout<<"Masukan elemen Baris : "<<x+1<<endl;
			for(z = 0; z < y; z++){
				cin>>matriks1[x][z];
			}
		}
		
		cout<<"masukan elemen matriks2 : "<<endl;
		for(x = 0; x < v; x++){
			cout<<"Masukan elemen Baris : "<<x+1<<endl;
			for(z = 0; z < u; z++){
				cin>>matriks2[x][z];
			}
		}
		
		for(x = 0; x < w; x++){
			for(z = 0; z < y; z++){
				for(t = 0; t < v; t++){
					jumlah = jumlah + matriks1[x][t]*matriks2[t][z];
				}
				hasil[x][z] = jumlah;
				jumlah = 0;
			}
		}
		
		cout<<"Hasil Perkalian : \n";
		for(x = 0; x < w; x++){
			for(z = 0; z < u; z++){
				cout<<hasil[x][z]<<" ";
			}
			cout<<endl;
		}	
	}
	
	getchar;

	cout<<endl<<endl<<"=========================================================================================="<<endl;
	const string cek[3][3] = {"D","Dada","Rp2.500","P","Paha","Rp2.000","S","Sayap","Rp1.500"};
	int a1, c1, o1, a2, c2, d[20], d1[20], d2 = 0, d3;
	char h[20];
	
	cout<<"\t\tGEROBAK FIRED CHICHEN"<<endl;
	cout<<"====================================================="<<endl;
	cout<<"\tKode\t\tJenis\t\t Harga"<<endl;
	cout<<"====================================================="<<endl;
	
	for(a1 = 0; a1 < 3; a1++){
		for(c1 = 0; c1 < 3; c1++){
			cout<<"\t"<<cek[a1][c1]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"====================================================="<<endl;
	
	cout<<endl<<"Banyak jenis : ... ";
	cin>>o1;
	
	for(a1 = 0; a1 < o1; a1++){
		cout<<"Jenis Potong [D/P/S] : ... ";	
		cin>>h[a1];
		cout<<"Banyak Potong : ... ";
		cin>>jns[a1].banyak;
	}
	
	string j[5] = {"No.","Jenis Potong"," Harga Satuan","  Banyak Potong","     Jumlah Harga"};
	
	cout<<"\t\tGerobak Fired Chichen"<<"\n--------------------------------------------------------------------------------\n";
	for(int q = 0; q < 5; q++){
		cout<<j[q]<<"\t";
	}
	cout<<endl<<"--------------------------------------------------------------------------------\n";
	
	
	for(int a2 = 0; a2 < o1; a2++){
		cout<<a2+1<<"\t\t"<<h[a2]<<"\t   ";
		if(h[a2] == 'd' || h[a2] == 'D'){
			cout<<"Rp "<<2500;
		}
		else{
			if(h[a2] == 'p' || h[a2] == 'P'){
				cout<<"Rp "<<2000;
			}
			else{
				if(h[a2] == 's' || h[a2] == 'S'){
				cout<<"Rp "<<1500;
				}
			}
		}
		cout<<"\t\t"<<jns[a2].banyak<<"   \t        ";
		if(h[a2] == 'd' || h[a2] == 'D'){
			d1[a2] = 2500*jns[a2].banyak;
			cout<<"Rp "<<2500*jns[a2].banyak;
		}
		else{
			if(h[a2] == 'p' || h[a2] == 'P'){
				d1[a2] = 2000*jns[a2].banyak;
				cout<<"Rp "<<2000*jns[a2].banyak;
			}
			else{
				if(h[a2] == 's' || h[a2] == 'S'){
					d1[a2] = 1500*jns[a2].banyak;
					cout<<"Rp "<<1500*jns[a2].banyak;
				}
			}
		}
		d2 = d2 + d1[a2];
		cout<<endl;
	}
	
	d3 = d2 * 10/100;
	
	cout<<"--------------------------------------------------------------------------------\n";
	
	cout<<"\t\t\t\t\t  Jumlah Bayar :\tRp "<<d2<<endl;
	cout<<"\t\t\t\t\t     Pajak 10% :\tRp "<<d3<<endl;
	cout<<"\t\t\t\t\t   Total Bayar :\tRp "<<d3+d2<<endl;
		
	cout<<"--------------------------------------------------------------------------------\n";
	
	
	return 0;
}
