#include <iostream>
using namespace std;

int main(){
	int s,is,js,zs,row;
	cout<<"Input lebar belah ketupat : ";
	cin>>s;
	cout<<endl;
	
	
	for(is = s ; is >= 1; is--){
		for(js = 1; js <= is; js++){
			cout<<" *";
		}
		for(zs = 1; zs <= (s - is)*2; zs++){
			cout<<" ";
		}
		for(js = s-1; js >= is; js--){
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
			cout<<" ";
		}
		for(js = s; js > is; js--){
			cout<<"  ";
		}
		for(js = 1; js <= is; js++){
			cout<<" *";
		}
		cout<<endl;
	}

	getchar ();
}
