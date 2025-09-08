//Create a function that takes two character arrays(strings) and checks whether they are anagrams of each other.
#include<iostream>
#include<fstream>
using namespace std; 
int anagrams( char( &arr1)[10],char(& arr2)[10]) {
	cout << arr1 << endl;
	cout << arr2<< endl;
	bool fond = false;
	// now for compearing the both arr 
	for (int i = 0; arr1[i]!='\0'; i++) {
		for (int j= 0; arr2[j] != '\0'; j++){
			if (arr1[i]==arr2[j]){
				fond = true;
			}
		}
	}

	if (fond == true) {
		cout << " yes this the anagrams type of word  " << endl;
	}
	else {
		cout << " not  this the anagrams type of word  " << endl;
	}

	return 0;
}
int main() {
	char arr[10];
	char arr2[10];
	ifstream read("dox.txt");
	read.getline(arr, 100,' ');
	cout << arr;
	cout << endl;
	read.getline(arr2, 10,'\n');
	cout << arr2;
	anagrams(arr , arr2);
	return 0; 
}
