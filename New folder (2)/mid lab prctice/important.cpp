//Use a function to remove duplicate characters from a string(character array), like "programmings" → "progamins".
#include<iostream>
#include<fstream>
using namespace std;
int remove(char arr[100], int& s) {
	arr[s];
	for (int i = 0; arr[i] != '\0'; i++) {
		for (int j = i + 1; arr[j] != '\0'; j++) {
			if (arr[i] == arr[j]) {

				for (int k = i; arr[k]!='\0'; k++){ // in this loop we will are manging the last latters in word we are carrying them to left   
					arr[k] = arr[k+1];
				}
			}
		}
	}
	for (int j = 0; arr[j] != '\0'; j++) {
		cout << arr[j];
	}

	return 0;
}
int main() {

	char arr[100];

	int s = 100;
	ifstream read("dox.txt");
	read.getline(arr, 100, '/0');
	//cout << arr;

	remove(arr, s);

	return 0;
}