#include<iostream>
#include<fstream>
using namespace std; 
int main(){
	ifstream read("dox.txt");
	
		char arr1[20];
		char arr2[20];
		int num = 0;
		
	/*while (!read.eof()) {
		read.getline(arr1, 20,'.');
		read.ignore('\n');
		read.getline(arr2, 20,'.');
	  read >> num;
	  cout << " this title :" << arr1 << " this is the name of author " << arr2 << " this the price: " << num << endl;
	}*/
		int i = 0; 
		while (!read.eof()) {
			
			read.getline(arr1, 20, '.');
      		read.ignore('\n');
			read.getline(arr2, 20, '.');
			read >> num;

			cout << "  these detalis of book "<< i << endl;
			cout << " this title :" << arr1 << endl;
			cout << " this is the name of author " << arr2 << endl;
			cout << " this the price: " << num << endl;
			cout <<" _____________________________"<<endl;
			i++;
		}

	return 0;
}
