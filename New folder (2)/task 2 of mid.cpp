#include<iostream>
#include<fstream>
using namespace std; 
bool fun(char arr[], int s) {
	bool found = false;
	for (int i = 0; arr[i] != '\0'; i++) {
		cout << arr[i];
	}
	char arr2[27] = {"abcdefghijklmnopqrstuvwxyz"};

	for (int i = 0; arr2[i] != '\0'; i++) {
		found = false;
		for (int j = 0; arr[j] != '\0'; j++ ) {
			if ( arr2[i] == arr[j]){
				found =true;
				
				break;  

			}
			
			



		}
		 

	  if (found == false){
		cout << "this arr arr not contain the all elements " << endl;
		break;

	  }else {
		cout << " all are present in the arr " << endl;
		break;
	  }
		 
	}


	 



	 return 0; 
 }
int main() {
	char arr[100];
	cout << " enter the arr contain the whole " << endl;
	cin.getline(arr, 100);
	fun(arr, 100);
	return 0; 
}