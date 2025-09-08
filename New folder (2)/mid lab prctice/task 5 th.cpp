// Write a recursive function that counts the frequency of each character in a given string.Use reference parameters to update the frequency counts.
#include<iostream>
#include<fstream>
using namespace std; 

int fun( ifstream &fun , char (& arr)[100],int &s){
	cout << arr << endl;

	char ch;
	cout << "enter the which you want to count freequcy " << endl;
	cin >> ch; 
	int count = 0;
	for (int i = 0; arr[i]!='\n'; i++) {

		if (ch == arr[i] ) {
			count++;
		}

	}

	cout << count << endl;



	return count ;
}

int main(){
	ifstream read ("dox.txt");
	char arr[100];
	int s = 100; 
	cout << "enter the arr "<<endl;
	read.getline(arr, 100);

	 int result =fun(read,arr ,s);
	 cout << result;
	return 0; 
}