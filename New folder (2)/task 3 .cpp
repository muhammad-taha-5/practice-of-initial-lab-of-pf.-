#include<iostream>
#include<fstream>
using  namespace std;
void fun(int* arr , int& s) {
	int uniq[10] = {0};
	bool  duplicate;

	int index = 0;
	for (int i = 0; i < s; i++ ){
		bool  duplicate = false; 
		for (int j = 0; j<index;j++){
			if (arr[i] == uniq[j]){
				duplicate = true; 
				break; 
			}
			

		}
		if (!duplicate){
			uniq[index++] = arr[i];

		}

	}


	
	for (int i = 0; i < 9; i++ ){
		cout<< uniq[i] ;
	}

}

int main() {

	ifstream read("dox.txt");
	// now for the taking the size of arr 
	int  s;
	read >> s;
	// noprmal declearation of the dynamic memory 
	int* arr = new int[s];

	// now read the file and put data in the  arr 

	for (int i = 0; i < s; i++) {
		read >> arr[i];
	}

	for (int i = 0; i < s; i++) {
		cout<< arr[i];
	}

	int n;
	cout << " enter the num" << endl;
	cin >> n;











	fun(arr,  s);

	



	return 0;
}