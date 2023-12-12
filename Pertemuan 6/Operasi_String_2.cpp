#include <iostream>
#include <fstream>
using namespace std;


//int main(){
// ofstream myfile;
// myfile.open("TEST.txt", ios::app);
// cout<<"OPERASI FILE OFSTREAM"<<endl;
// cout<<"--------------"<<endl;
// if(!myfile.fail())
// {
// myfile<<"Belajar OPERASI FILE OFSTREAM"<<endl;
// myfile.close();
// cout<<"Text telah ditulis ke dalam File"<<endl;
// }else{
// cout<<"File tidak ditemukan"<<endl;
// }
// getchar();
// 
// return 0;
//}


int main(){
	ifstream myfile;
	char sv_text;
	myfile.open("TEST.txt");
	cout<<"OPERASI FILE 2"<<endl;
	cout<<"--------------"<<endl;
	if(!myfile.fail())
 	{
	cout<<"Isi dari File TEST.txt adalah ";
	while (!myfile.eof())
	{
	myfile.get(sv_text);
	cout<<sv_text;
	}
	myfile.close();
	}else{
	cout<<"File tidak ditemukan"<<endl;
	}
	getchar();
	return	0;
}
