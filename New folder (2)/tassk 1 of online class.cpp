#include< iostream>
using namespace std;
int main() {

	int arr[4][4];
	int arr2[4][4];

	cout << " enter  the1st arr " << endl; 
	for (int r = 0; r < 4; r++){
		for (int c = 0; c <  4; c++){
			cout << "  arr1[" << r << "][" << c << "]" << endl;

			cin >> arr[r][c]; 

		}
	}

	cout << " enter  the 2nd arr " << endl; 
	
	for (int r = 0; r < 4; r++) {
		for (int c = 0; c < 4; c++) {
			cout << "  arr2[" << r << "][" << c << "]" << endl;
			cin >> arr2[r][c];

		}
	}

	int sum_arr[4][4]; 
	for (int r = 0; r < 4; r++) {
		for (int c = 0; c < 4; c++) {
			  
			for (int k = 0; k < 4; k++){
				   
				sum_arr[r][c] = arr[c][k] + arr2[c][k];

			}

		}
	}

	// now for seeout the arr  

	for (int r = 0; r < 4; r++) {
		cout << emdl;
		for (int c = 0; c < 4; c++) {

			

		 	 cout << sum_arr[r][c]<<  " ": 

			

		}
	}

	// cout<< enter the num<< in the  
	int  num; 
	cout << "  enter the num<< in the " << endl;
	cin >> num ;

	//  cheeking the num 
	bool found = false; 
	 // found in the  sum arr   

	for (int r = 0; r < 4; r++){
		found = false; 
		cout << endl;
		for (int c = 0; c < 4; c++){

			if (sum_arr[r][c] == num){
				found = true;
				  break;
				  if (found == true ){
					  cout << "  this the num "<< sum_arr[r][c]<< " " << endl;
			      }
			}

		}
	}



	 // if   found in the   1st  arr  
	bool found2 = false;
	for (int r = 0; r < 4; r++) {
		found2 = false;
		cout << endl;
		for (int c = 0; c < 4; c++) {

			if (arr[r][c] == num) {
				found2 = true;
				break;
				if (found2 == true) {
					cout << "  this the num " << arr[r][c] << endl;
				}
			}
		}
	}













	return 0; 
 }