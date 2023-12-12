#include <iostream>
using namespace std;

int main(){
	int x, y, l;
	l = 1;
	
	for(x = 1; x <= 4; x++){
		for(y = 1; y <= 4; y++){
			cout<<l;
		}
		
		l++;
		cout<<endl;
	}
	getchar();
	
	int q, w;
	
	cout<<"\n==============================================================\n";

	cout<<"Perulangan Menaik";
	for(w = 1; w <= 10; w++){
		cout << endl;
		for(q = w; q<=w; ++q){
			cout<<q<<" "; 
		}
	}
	cout<<endl<<"------------------------------";

	for(w = 10; w >= 1; w--){
		cout << endl;
		for(q = w; q>=w; --q){
			cout<<q<<" "; 
		}
	}
	cout<<endl<<"Perulangan Menurun";
	
	
	getchar();
		
	cout<<"\n==============================================================\n";

	int g, k;
	cout<<"Bilangan Genap";
	for(g = 1; g <= 10; ++g){
		cout << endl;
		for(k = g; k <=g; ++k){
			cout<<" "<<k * 2<<" "; 
		}
	}
	
	cout<<endl<<"------------------------------"<<endl;
		
	cout<<"Bilangan Ganjil";
	for(g = 1; g <= 10; ++g){
		cout << endl;
		for(k = g; k <=g; ++k){
			cout<<" "<<(k * 2)-1<<" "; 
		}
	}
	
	getchar();
	
	cout<<"\n==============================================================\n";
	

	int t, r, u, jf, h ;
	jf = 0;
	
	cout<<"Masukan Angka : "; cin>>r;
	
	for(h = 1; h <= r; h++){
		if(r % h == 0){
			jf++;
		}
	}
	
	cout<<r<<" adalah"<<endl;
	
	if(jf == 2){
		cout<<"Bil. Prima"<<endl;
	}
	else{
		cout<<"Bukan Bil Prima"<<endl;
	}

	
	cout<<"Menampilkan Deret Bilangan Prima 1-100";
	cout<<endl;

	for(r = 1; r <= 100; r++){
		t = 0;
		for(u = 1; u <= r; u++){
			if(r % u == 0){
				t = t + 1;
			}
		}
		if (t == 2)
		cout<<r<<" ";
	}
	
	getchar();
	
	cout<<"\n==============================================================\n";


	int s,is,js,zs,row;
	cout<<"Input lebar belah ketupat : ";
	cin>>s;
	cout<<endl;

	for(is = s ; is >= 1; is--){
		for(js = 1; js <= is; js++){
			cout<<"*";
		}
		
		for(zs = 1; zs <= (s - is)*2; zs++){
			cout<<" ";
		}
		
		for(js = 1; js <= is; js++){
			cout<<"*";
		}
		cout<<endl;
	}

	for(is = 1; is <= s; is++){
		for(js = 1; js <= is; js++){
			cout<<"*";
		}
		for(zs = 1; zs <= (s - is)*2; zs++){
			cout<<" ";
		}
		for(js = 1; js <= is; js++){
			cout<<"*";
		}
		cout<<endl;
	}

	cout<<endl<<"------------------------------"<<endl<<endl;
	
	for(is = s ; is >= 1; is--){
		for(js = 1; js <= is; js++){
			cout<<" *";
		}
		for(zs = 1; zs <= (s - is)*2; zs++){
			cout<<"  ";
		}
		for(js = 1; js <= is; js++){
			cout<<" *";
		}
		cout<<endl;
	}

	for(is = 1; is <= s; is++){
		for(js = 1; js <= is; js++){
			cout<<" *";
		}
		for(zs = 1; zs <= (s - is)*2; zs++){
			cout<<"  ";
		}
		for(js = 1; js <= is; js++){
			cout<<" *";
		}
		cout<<endl;
	}

	getchar ();
	
	
	return 0;
}

