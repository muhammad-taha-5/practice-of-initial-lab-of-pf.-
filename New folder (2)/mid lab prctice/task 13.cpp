// Write a function that compares two strings without using strcmp().
#include<iostream>
#include<fstream>
using namespace std;
int string_comp(char arr[], char arr1[], int&s ) {

	arr[s];
	arr1[s];
	bool compeare = false;
	for (int i= 0; arr[i] != '\0'; i++) {
		if ( arr[i]== arr1[i]){
			compeare = true;
			break;
		}

	}

	if (compeare == true){
		cout << "yes this compearsion sucessfully "<< endl;
	}
	else {
		cout << " not sucessfully " << endl;
	}




	return 0;
}
int main(){
	ifstream read("dox.txt");
	char arr[100];
	int s = 20;
	while (read >> arr){
		cout << arr << endl;
		string_comp(arr,arr ,s);
	}












	return 0; 
}