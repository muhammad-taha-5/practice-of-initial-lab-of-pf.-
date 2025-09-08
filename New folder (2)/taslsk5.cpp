//Implement functions to convert all characters in a C-style string to uppercase and lowercase without using standard library functions.
#include<iostream>
#include<fstream>
using namespace std; 
int main() {
	char arr1[10];
	char arr2[10];
	char arr3[10];
	char arr4[10];
	ifstream read("dogs.txt");
	ofstream temp("doxs.txt");



	while (!read.eof()){
		read >> arr1 >> arr2>>arr3>>arr4;
		//now for compaering the two char arr their 0th index
		char  temp_arr[10];
            
		    if (arr1[0] > arr2[0]&& arr1[0] > arr3[0]&& arr1[0] > arr4[0]){

				temp << " " << arr4 << " " << arr3 << " " << arr2 << " " << arr1;

			}
		
		cout << " " << arr4 << " " << arr3 << " " << arr2 << " " << arr1;
	}






	return 0; 
}