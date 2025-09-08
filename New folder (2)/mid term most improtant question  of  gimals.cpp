// //1 ./filling  read two gmails and then which one gimal have the end of @gmail.com.
#include<iostream>
#include<fstream>
using namespace std; 
int read(ifstream & read ,ofstream & write){
	
	while (!read.eof()){
	bool found = true; 
	char arr[100];
		read.getline(arr,100,' ');
	  cout << arr << endl;
   //  now  for the   length of the string 
		int length = 0;
		for (int i = 0; arr[i] != '\0'; i++){
          
			length++;
		}
		cout << length << endl;

		 const char arr2[12]= "@gmail.com ";
	      
		 for (int i = 0; i < 10; i++){
			 int remain = length - 10 ;
			 if (arr[ remain + i ] != arr2[i]){
				 found  = false;
				 break;
			 }
		 }
		 if ( found){
			 write << arr;
			 cout << " matached" << endl;
		 }else {
			 cout << " un matched arr " << endl;
		 }
		 

    }



	return 0; 
 }
int main() {
	ofstream w("dogs.txt");
	 ifstream re("dox.txt");
	 read(re, w);

	return 0; 
 }

 file input and output will be >>>>  haleem@gmail.com   >> \n >>   halemd@gmail.com >> \n >> sanamm@gmail.com 
haleem@gmail.com 
saliem@ymail.com 
halemd@gmail.com 
aleema@outlook.com 
salema@live.com 
sanamm@gmail.com 