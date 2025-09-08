//#include<iostream>
//#include<fstream>
//using namespace std; 
//void fun (int &key,  int *arr , int &s ) {
//	// bool 
//	bool found = false; 
//
//	//  now for vewing the arr 
//	for (int i = 0; i < s; i++){
//
//		if ( key == arr[i] ){
//			cout << " this this the num found " << arr[i];
//			found = true;
//			break; 
//		}
//
//	}
//	cout << endl; 
//	
//	for (int i = 0; i < s; i++){
//		cout << arr[i] << " " ;
//	}
//
//}
//
//int main() {
//	ifstream read("dox.txt"); 
//	
//
//	  // it reads the size of arr form  file 
//       int s; 
//	read >> s; 
//	// now for making the dynamic memory 
//	int* arr = new int [s]; 
//
//	// now reading the txt file  intiger   arr 
//	for (int i = 0; i < s; i++){
//
//		read >> arr[i];
//	}
//
//	int key ;
//	cout << " enter the key " << endl; 
//	cin >> key; 
//
//
//
//	fun( key  , arr  , s ); 
//
//	return 0; 
//}