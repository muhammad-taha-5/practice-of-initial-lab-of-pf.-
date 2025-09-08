#include<iostream>
#include<fstream>
using namespace std;
int read(ifstream& read, ifstream& reads) {
	char arr[100];
	char arr2[100];
	int count = 0;
	ofstream write("dox.txt");

	if (!read.is_open())
	{
		cout << " not open" << endl;
	}
	else {
		if (!reads.is_open()) {
			cout << " not open" << endl;
		}
		else {
			cout << " opened " << endl;
			while (!reads.eof()){
				
				reads.getline(arr, 100 ,'\n');
				cout << arr << " " << endl;
				write << arr << endl;
			}
			while (!read.eof()) {
				read.getline(arr2, 100, '\n');
				cout << arr2 << " ";
				write << arr2;


			}















		}
		cout << " opened " << endl;
	}


	return 0;
}


int main() {
	ifstream re("doxs.txt");
	ifstream rea("dogs.txt");

	cout << read(re, rea);
	return 0;
}