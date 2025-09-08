// task 1 take two file  these both files conttain numbres and then murrge and then put these all numbers into the other file whilh contain these  numbers and keep them into in assending order  
#include<iostream>
#include<fstream>
using namespace std;
int main(){

	int arr[10];
	int num = 0;
	int num2 = 0;
	ifstream read("dox.txt");
	ifstream reads("doxs.txt");
	int i = 0; 

	while (read >> num){

		arr[i]=num ;
		i++;
	}
	int j = 0; 

	// now for murrging both arr 
	while (reads >> num2){
		arr[i+j] = num2;
		j++;
	}
	for (int i = 0;i<9; i++){
		cout << arr[i];
	}
	// nw for the sortiing 
	int temp = 0;
	for (int j = 0; j < 10; j++){
		for (int i = j+1; i < 9; i++) {

			if (arr[j] > arr[i]){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}

		}
	}
	cout << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i]<<" ";
	}



	return 0; 
}