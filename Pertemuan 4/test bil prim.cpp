#include <iostream>
using namespace std;

//int ambil(int bil, int i){
//	if ( i == 1){
//		return 1;
//	}
//	else{
//		if (bil % i == 0) {
//			return 1 + ambil(bil, --i);
//		}
//		else{
//			return 0 + ambil(bil, --i);
//		}
//	}
//}
//
//int cek(int bil){
//	if(bil > 1){
//		return(ambil(bil, bil)== 2);
//	}
//	else{
//		return false;
//	}
//}
//
int main (){
//	int bil;
//	cout<<"Masukan Bilangan : ";
//	cin>>bil;
//	
//	if (cek(bil)){
//		cout<<"Bilangan Prima"<<endl;
//	}
//	else {
//		cout<<"Bukan bilangan Prima"<<endl;
//	}
	
		int t, r, u, jf, h ;
	jf = 0;
	
	cout<<"Masukan Angka : "; cin>>r;
	
//	for(h = 1; h <= r; h++){
//		if(r % h == 0){
//			jf++;
//		}
//	}
//	
//	cout<<r<<" adalah"<<endl;
//	
//	if(jf == 2){
//		cout<<"Bil. Prima";
//	}
//	else{
//		cout<<"Bukan Bil Prima";
//	}
//	
//	return 0;
	
	
	
	for ( h = 1; h <= r; h++){
		if(r % h == 0){
			jf++;
		}
	}
	
	if(jf == 2){
		cout<<"Bil Prima"<<endl;
	}
	else{
		cout<<"Bukan Bil Prima"<<endl;
	}
	
	
	return 0;
}
