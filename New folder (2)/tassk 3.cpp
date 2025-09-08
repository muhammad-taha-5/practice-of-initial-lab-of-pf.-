//Write a program that reads a text file and counts the number of times a specific character appears in the file.
#include <iostream>
#include<fstream>
using namespace std;
bool found (ifstream & found ) {
	int count = 0; 
	char arr[100];
	char ch;
	cout << " enter the charrctre" << endl;
	cin >> ch;
	if (found.is_open()){
		cout << " open " << endl;
	}

      while (!found.eof()){
		 found.getline(arr, 100);
			cout << arr<<endl; 
			for (int i = 0; arr[i]!='\0'; i++) {
			   if( arr[i] == ch){
				count++; 
			   }
			}

		
	}

		cout << " count  " << count << endl;


	return 0;
}

int main() {
	ifstream read("dox.txt");
	
	
	

	found(read);
	return 0;
}