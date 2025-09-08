// Write program to sort and write integers from a file in ascending order
#include<iostream>
#include<fstream>

using namespace std; 

int  swape(int arr[], int &s) {
	int temp=0;
	arr[s];
	////int temp = 0;
	////int index = 0;
	/////*for (int j = 0; j < s-1; j++){
	//   int j;
	//	for (int i = j+1; i < s - 1 ; i++) {

 // 			if ( arr[j] > arr[i]){
	//			temp = arr[j];
	//			
	//			index = i;
	//		}
	//	}
	//	arr[j] = arr[index];
	//	arr[index] = temp;
	//}*/

	for (int i = 0 + 1; i < s - 1; i++){
		if (arr[i] > arr[i+1]){
			temp = arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			
		}
	}
	

	cout << endl;
	for (int i = 0; i  < s; i++) {
		cout << arr[i];
	}
	return 0;
}



int main(){
	int num = 0;
	int arr[10];
	int s = 10;
	ifstream read("dox.txt");
	if (read.is_open () ) {
 
		int i = 0;
		while (read >> num) {
			arr[i] = num;
			i++;
		}
		swape(arr, s);
    }

	return 0; 
}
