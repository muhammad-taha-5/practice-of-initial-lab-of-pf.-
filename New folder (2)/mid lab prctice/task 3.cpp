//// Write a program to remove all blank spaces from a file and save the modified content.
//#include<iostream>
//#include<fstream>
//#include <cstring>
//using namespace std;
//int palandrome(char arr[],int a) {
//	arr[a];
//	bool ispalandrom = false; 
//	string s;
//	// now  revsing the char arr 
//	for (int i = 5; i>=0; i++){
//
//		s = arr[i];
//
//	}
//	// now for cheeking the arr 
//	for (int i = 0; i< s.length(); i++){
//		if (arr[i]== s[i]){
//			ispalandrom = true;
//		}
//
//	}
//
//
//	if (ispalandrom == true) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//
//}
//
//int main(){
//	int result = 0; ;
//
//	ifstream read("dox.txt");
//	ofstream write("dox.txt", ios::app);
//
//	char arr[100];
//	if (read.is_open()){
//      cout << " opend " << endl;
//
//	  while (read >> arr){
//	   read.getline(arr,100,'/n');
//	   cout << arr;
//	    result = palandrome( arr ,100 );
//		if (result==1) {
//			cout << "  yes palandrome" << endl;
//			write << "  yes palandrome" << endl;
//		}
//		else {
//			cout << " not  palandrome" << endl;
//			write << " not  palandrome" << endl;
//		}
//
//      }
//     
//	}
//	else {
//		cout << "not OPened " << endl;
//	}
//
//
//	return 0;
//}