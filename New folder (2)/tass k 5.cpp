// key found if { then cout<< its index }or not else { greater then the  }  
#include<iostream>
#include<fstream>
using namespace std; 
int fun(ifstream& fun, int arr[], int s , int& key) {
	arr[s];
	cout << " enter the key " << endl;
	cin >> key; 
	int i = 0; 
	while (!fun.eof()){
		fun >> arr[i];
		
		i++;
	}
	bool found =false;
	int largest =0;
	int index = 0; 
	for (int j = 0; j <=9; j++){
		found = false;
		
		if (arr[j] == key){
			   cout<< j;
			found = true;
			 
		
		}
		else if(found ==false) {

			
				
				if( arr[j] > key){
					largest = arr[j];
					  cout<<  largest;

			
			    }
			 
		}

	}


	return 0; 
}
int main(){
	ifstream read("dox.txt");
	int  arr[10];


	int key;  
	fun( read ,arr ,10 ,key ); 

	return 0;
}