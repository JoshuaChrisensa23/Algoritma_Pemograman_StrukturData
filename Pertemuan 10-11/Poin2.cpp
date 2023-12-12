#include <iostream>
using namespace std;

int main(){
	int ilham;
	int *raka;
	int **amir;
//clrsrc;
	ilham = 75;
	cout<<"Nilai Ilham = "<<ilham<<endl;
	raka = &ilham;
	amir = &raka;
	
	cout<<"Nilai Raka hasil megakses Ilham = ";
	cout<<*raka<<endl;
	cout<<"Nilai Amir hasil mengakses Ilham = ";
	cout<<**amir<<endl;
	getchar();
}
