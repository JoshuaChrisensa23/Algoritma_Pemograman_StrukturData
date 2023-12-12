#include <iostream>
using namespace std;

int main(){
	int ilham, *raka, rafli;
//clrsrc;
	ilham = 75;
	raka = &ilham;
	rafli = *raka;
	cout<<"Nilai Ilham = "<<ilham<<endl;
	cout<<"Nilai Raka = "<<raka<<endl;
	cout<<"Nilai Rafli = "<<rafli<<endl;
	getchar();
}
