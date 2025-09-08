// Task 3: Recursive Memory Search in 2D Matrix
//Dynamically allocate a 2D array(matrix) using double pointers.
//Write a recursive function that searches for a target value inside the matrix and returns its row and column index.
//  Challenge : Do not use loops; navigate rows and columns with recursion.
#include< iostream>
using namespace std; 
int  fun_with_2D(int arr[3][3]){

	  // now the target usre will give us 
	int n; 
	cout << " ener the num " << endl; 
	cin >> n; 
	 // this the sigle  poiter 
	int* p1 = &n; 

	// now  here we will mae doble pointer  
	int** pd = &p1;
    //  
	bool found = false;

	for (int r = 0; r < 3; r++) {
		found = false;
		for (int c = 0; c < 3; c++) {
			 
			 if ( ** pd == arr[r][c] ){
				 found =  true;
				 cout << **pd << " this found to me  " << arr[r][c] <<" rows  " << r << " colums   " << c << endl;

			 
			 }



		}
		cout<<" "<<endl;
	}


	return 0; 
}

int main() {
	int arr[3][3];
	cout << "enter the " << endl;
	for (int r = 0; r < 3; r++) {

		for (int c = 0; c < 3; c++ ) {
			cout << " arr[" << r << "][" << r  << " ]" << endl; 
			cin >> arr[r][c]; 
		} 
	 	 
	}
	

	





	fun_with_2D(arr); 



	return 0; 
}