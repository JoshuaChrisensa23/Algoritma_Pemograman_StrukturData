#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#define MAX 10
using namespace std;

int top=-1, stack[MAX];

void push(){
	if(top == MAX-1){
		cout<<">> Stack sudah Penuh !!"<<endl;
	}
	else{
		top++;
		cout<<">> Masukan Data : ";
		cin>>stack[top];
		cout<<"\nPada index ke '"<<top<<"' \n";
		cout<<"Data ["<<stack[top]<<"] telah Ditambah !"<<endl;
	}
}

void pop(){
	if(top == -1){
		cout<<">> Stack kosong !"<<endl;
	}
	else{
		cout<<"\nData ["<<stack[top]<<"] pada index ke-"<<top<<" dalam stack diambil !"<<endl;
		stack[top--];
	}
}

int clear(){
	return top = -1;
}

void print(){
	if(top == -1){
		cout<<"		stack : ";
		cout<<"\n==========================================="<<endl;
		cout<<"		Empty! \n==========================================="<<endl;
	}
	else{
		cout<<"		stack : ";
		cout<<"\n==========================================="<<endl;
		
		for(int i = top; i>=0; i--){
			cout<<"\t    xxxxx["<<stack[i]<<"]xxxxx"<<endl;
		}
		cout<<"===========================================";
	}
}

int main(){
	int choose;
	do{
		print();
		cout	<<"\n1. Push"
				<<"\n2. Pop"
				<<"\n3. Clear"
				<<"\n4. Exit"
				<<"\nPergerakan ( TOP ) : "<<top
				<<"\n\nChoose = ";cin>>choose;
		switch (choose){
			case 1 : 
				push();getch();
				break;
			case 2 : 
				pop();getch();
				break;
			case 3 : 
				clear();
				cout<<"\nClear Succes"<<endl;
				getch();
				break;
			case 4 : 
				cout<<"Terima Kasih telah menggunakan program ini"<<endl;
				getch();
				break;
			default : 
				cout<<"pilihan tidak ada\nMasukan pilihan sesuai daftar"<<endl;
				getch();
				break;
		}
		system("cls");
		
	}
	while(choose != 4);
	
}

