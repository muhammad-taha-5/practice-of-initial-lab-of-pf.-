#include<iostream>
#include<fstream>
using namespace  std;
int main() {

	char  name[10];
	int  num=0 ; 
	ifstream read("dox.txt");
	ofstream write("dogs.txt");
	/*while ( !read.eof ()){
		read >> name;
		read >> num;
		cout << name << num << endl;
		write << name << num << endl;
	}*/
	int i = 0; 
	while ( i< 3){
		cout << " enter the name  " << endl;
		cin >> name;
		cout << " enter the num " << endl;
		cin >> num ;
		write << name << num << endl;
		i++;
	}









	return 0; 
}