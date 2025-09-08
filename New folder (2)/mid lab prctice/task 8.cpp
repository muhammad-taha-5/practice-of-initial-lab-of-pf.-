//Write a program that reads lines from a file, counts how many words each line has using a function, and prints the count
#include<iostream>
#include<fstream>
using namespace std;


int main() {
	char arr[100];
	int i =0;
	int word= 1; 
	ifstream read("dox.txt");
	while (!read.eof()) {
		int word = 1;
		read.getline(arr, 100);
		for (int i = 0; arr[i] != '\0'; i++){
			if (arr[i]==' '|| arr[i] == '\n'|| arr[i] == '.') {
				word++;
			}
		}
		cout << arr << endl;
			cout<< " these are the word count in each sentace :" << word;
		cout << endl;
	}




	return 0;
}