#include<iostream>
#include<fstream>
using namespace std; 
int main() {
	int arr[10];
	
	ifstream read("dox.txt");
	/*int i = 0;
	while (read >> num) {
		arr[i] = num;
		cout << num;
		i++;
	}*/
	for (int i = 0; i < 10; i++){
		read >> arr[i];
		//cout << arr[i];
	}


	int i= 0; 
	while (i<10){
		if (i%2==0 ) {

			for (int j = i + 2; j <10; j+=2){
				if (arr[i] > arr[j]){
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		else {
			for (int j = i+2; j < 10; j+=2){
				if (arr[i] <  arr[j]) {
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
					
				}
			}
		}








		cout << arr[i] << " ";
		

		i++;
	}


	/*for (int i = 0; i< 10; i++) {

		cout << arr[i]<<" ";
	}*/





	return 0;
}