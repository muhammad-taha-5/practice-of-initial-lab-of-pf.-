#include<iostream>
#include<fstream>
using namespace std;  
int read(ifstream & read , ifstream& reads){
	char arr[100];
	int count = 0; 
	ofstream write("dox.txt");

	if (!read.is_open() )
	{
		cout << " not open" << endl;
	}
	else {
		if (!reads.is_open()) {
			cout << " not open" << endl;
		}
		else {
			cout << " opened " << endl;
		}
	}


	return  ;
}


int main(){
	ifstream re("doxs.txt");
	ifstream rea("dogs.txt");

	 cout<< read(re, rea);
	return 0; 
}