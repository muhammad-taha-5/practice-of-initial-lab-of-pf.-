// Create a program that removes a specific book record from a text file based on the book's name
#include<iostream>
#include<fstream>
using namespace std;

int main() {
	ifstream read("dox.txt");
	char arr2[100];
	char arr[100];
	char give[100];
	int i = 0;
	cout << " enter the arr " << endl;
	cin >> give;
	int num = 0; 
	bool found = 0;
	ofstream write("doxs.txt");
	ofstream writes("dogs.txt");
	if (read.is_open()){
		cout << " open " << endl;

		while (!read.eof()) {
			read >> arr >> arr2 >> num;
			cout << arr << arr2 << num << endl;
			if (give[i] == arr[i]){
				found = true;
				
				writes << arr << " " << arr2 << "  " << num << endl;

			}
			else {
				write << arr << " " << arr2 << "  " << num << endl;
			}
			i++;
		}


	}
	else{
		cout << "not open " << endl;
	}

    








	return 0; 
}