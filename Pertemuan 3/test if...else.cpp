#include <iostream>
using namespace std;

int main(){
	bool benar;
	int x,y;
	cout << "Nilai x: "; cin >> x;
	cout << "Nilai y: "; cin >> y;
	
	benar = x < y;
	
	if (benar == true) {
		cout << "x lebih kecil dari pada y";
	}
	else{
		cout << " x lebih besar dari atau sama dengan y";
	}
	
	return 0;
}
