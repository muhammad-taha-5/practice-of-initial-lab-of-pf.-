#include<iostream>
#include<fstream>
using namespace std;

int golobal[10];
int g = 0;
void prime(int (&arr)[10] ,int &s ) {
	cout << endl;
	for (int i = 0; i < 10; i++){
		cout << arr[i];
	}
	bool is_prime = false;
	// now for the appling the prime finding logic.

	for (int i = 0; i < 10; i++){
		int j = 2;

		while (j < 5){

			if (arr[i] % j == 0) {

				
				is_prime = 1;
				golobal[g++] = 1;
					cout<<"is not  prime"<< endl;
				
			}
			else if (arr[i] % j != 0){
				
				is_prime = 0;
					cout << "is not  prime " << endl;
					golobal[g++] = 0;

			}
			j++;
			g++;
		}

		
	}
	
}
int main(){
	
	ifstream read("dox.txt");
	int arr[10];
	int s = 10;
	int i = 0;
	while (read >> arr[i]){
		i++;
	}

	for (int i = 0; i < 10; i++){
		cout << arr[i];
	}

	for (int i = 0; i < 10; i++) {
		if (golobal[i] == 1){
			cout << " this the prime " << endl;
		}
		else if (golobal[i] == 0){
			cout << " this prime " << endl;
		}

	}







	/*int result ;
	 result = prime( arr ,s );*/
	 
	/* if (result == 1) {
			cout << " this the prime " << endl;
		}
		else if (result == 0) {
			cout << " thisis not  prime " << endl;
		}*/


	return 0; 
}