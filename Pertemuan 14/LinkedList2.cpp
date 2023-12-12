#include <iostream>
using namespace std;

class Node{
	public : 
		int value;
		Node* next;
};

int main(){
	Node* head; //pointer node -> nama head;
	Node* one = NULL; //pointer node -> nama one, two, three memiliki value null;
	Node* two = NULL;
	Node* three = NULL;
	
	one =  new Node(); //new = syntax/perintah untuk memory alokasi pada node -> Menganut OOP
	two =  new Node();
	three =  new Node();//(Node*) malloc(sizeof(Node)) -> Prosedural
	
	one->value = 1; //memasukan value ke dalam node dengan cara memanggi nama variabel value menggunakan -> untuk pointer dan . untuk yg biasa
	two->value = 2;
	three->value = 3;
	
	one->next = two; //membuat arah tahap panah pointer next
	two->next = three;
	three->next = NULL;
	head = one; //inisiasi kepala ada di node one
	
	while(head != NULL){
		cout<<head->value;
		head = head->next;
	}
}
