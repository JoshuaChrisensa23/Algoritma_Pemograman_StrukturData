#include <iostream>
using namespace std;

int main (){
	int s,i,j,z;
	
	for(i = 1; i <= 7; i++){
		for(z = 1; z <= 7-i; z++){
			cout<<"* ";
		}
	}
	cout<<endl;
	for(i = 1; i <= 7; i++){
		for(z = 1; z <= 7-i; z++){
			cout<<"* ";
		}
//		for(z = 1; z <= 3-i; z++){
//			cout<<" ";
//		}
		cout<<" ";
//		for(z = 1; z <= 3-i; z++){
//			cout<<"* ";
//		}
	}
}
