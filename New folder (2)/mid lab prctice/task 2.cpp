#include <iostream>
#include<fstream >
using namespace std; 
int vowel(char (& arr)[10] ,int &s){
	arr[s];
	int c = 0;
	for (int i = 0;arr[i]!='\0'; i++){
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'o' || arr[i] == 'i' || arr[i] == 'u') {
			c++;
			cout << " this the index " << i << " this the vowel" << arr[i] << endl;
        }
	}







	return c;
}
int main() {

	ifstream read("dox.txt");

	char arr[10];
	cout << " read by the file the arr " << endl;
	read.getline(arr, 100,'\n');
	cout << arr;










	int s =100;
	vowel(arr,s);

	return 0;
}