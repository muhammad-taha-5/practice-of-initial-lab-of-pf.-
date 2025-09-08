#include<iostream>
#include<fstream>
using namespace  std; 
int main() {
	char arr[10];
	int price; 
	int no_sale;
	int largest = INT_MIN;
	ifstream read ("dox.txt");
	ofstream write("dogs.txt");
	if (read.is_open() ) {
		cout << " open " << endl;
		while (!read.eof()){
			read >> arr >> price >> no_sale;
			cout << arr << price << no_sale << endl;
			int total_sale = price* no_sale ;
			if(total_sale > 100000){
				write<< arr << " total_sale " << total_sale << endl;
				cout << arr << " total_sale " << total_sale << endl;
			}
			if (total_sale > largest) {
				largest = total_sale;
				cout << endl;
				cout << largest<< endl;
				write << largest;
			}


		}








	}
	else {
		cout << " not open " << endl;
	}






	return 0; 
}