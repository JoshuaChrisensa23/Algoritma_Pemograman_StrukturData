#include <iostream>
using namespace std;

int main(){
	int yofrie = 93;
	int *hadiansyah;
//clrsrc;
	cout<<"nilai awal yofrie = "<<yofrie<<endl;
	hadiansyah = &yofrie;
	cout<<"Nilai hadiansyah sekarang = ";
	cout<<*hadiansyah<<endl;
	*hadiansyah = 50;
	cout<<"nilai hadiansyah sekarang  = ";
	cout<<*hadiansyah<<endl;
	getchar();
}
