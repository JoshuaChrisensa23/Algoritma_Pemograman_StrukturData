#include <iostream>
using namespace std;

int main(){
//		int s,is,js,zs,row;
//	cout<<"Input lebar belah ketupat : ";
//	cin>>s;
//	cout<<endl;
//	
//	for(is = 1; is <= s; is++){
//		for(zs = 1; zs <= s-is; zs++){
//			cout<<" *";
//		}
//		cout<<endl;
//	}
//	
//	for(is = 1; is <= s; is++){
//		for(js = 1; js < is; js++){
//			cout<<"  ";
//		}
//		for(zs = s ; zs > is; zs--){
//			cout<<" *";
//		}
//		cout<<endl;
//	}
//	
//	for(is = 1;  is <= s; is++){
//		for(zs = 1;zs <= is; zs++){
//			cout<<" *";
//		}
//		cout<<endl;
//	}
//	
//	for(is = 1; is <= s; is++){
//		for(js = s; js > is; js--){
//			cout<<"  ";
//		}
//		for(zs = 1 ; zs < is; zs++){
//			cout<<" *";
//		}
//		cout<<endl;
//	}
//	
//	
//	

	int s,is,js,zs,row;
	cout<<"Input lebar belah ketupat : ";
	cin>>s;
	cout<<endl;

	for(is = s ; is >= 0; is--){
		for(js = 0; js <= is; js++){
			cout<<"*";
		}
		
		for(zs = 0; zs <= (s - is)*2; zs++){
			cout<<" ";
		}
		
		for(js = 0; js <= is; js++){
			cout<<"*";
		}
		cout<<endl;
	}

	for(is = 0; is <= s; is++){
		for(js = 0; js <= is; js++){
			cout<<"*";
		}
		for(zs = 0; zs <= (s - is)*2; zs++){
			cout<<" ";
		}
		for(js = 0; js <= is; js++){
			cout<<"*";
		}
		cout<<endl;
	}

	cout<<endl<<"------------------------------"<<endl<<endl;
	
	for(is = 6 ; is >= 1; is--){
		for(js = 1; js <= is; js++){
			cout<<" *";
		}
		for(zs = 1; zs <= (6 - is)*2; zs++){
			cout<<"  ";
		}
//		for(js = 6-1; js >= is; js--){
//			cout<<"  ";
//		}
		for(js = 1; js <= is; js++){
			cout<<" *";
		}
		cout<<endl;
	}

	for(is = 1; is <= 6; is++){
		for(js = 1; js <= is; js++){
			cout<<" *";
		}
		for(zs = 1; zs <= (6 - is)*2; zs++){
			cout<<"  ";
		}
//		for(js = 6; js > is; js--){
//			cout<<"  ";
//		}
		for(js = 1; js <= is; js++){
			cout<<" *";
		}
		cout<<endl;
	}


	cout<<endl<<"------------------------------"<<endl<<endl;
	
	for(is = s ; is >= 1; is--){
		for(js = 1; js <= is; js++){
			cout<<"* ";
		}
		for(zs = 1; zs <= (s - is)*2; zs++){
			cout<<"^";
		}
		for(js = s-1; js >= is; js--){
			cout<<"^^";
		}
		for(js = 1; js <= is; js++){
			cout<<" *";
		}
		cout<<endl;
	}

	for(is = 1; is <= s; is++){
		for(js = 1; js <= is; js++){
			cout<<"* "; 
		}
		for(zs = 1; zs <= (s - is)*2; zs++){
			cout<<"^";
		}
		for(js = s; js > is; js--){
			cout<<"^^";
		}
		for(js = 1; js <= is; js++){
			cout<<" *";
		}
		cout<<endl;
	}

	getchar ();
	
}

	
