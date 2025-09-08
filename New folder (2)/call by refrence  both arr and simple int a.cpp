#include<iostream>
using namespace std;
void  refrence ( int &a){

	cout << a << endl;
	a = 13;
	cout << a << endl;
}
int main(){

	int num;
	
	num = 20;
	refrence(num);
		  num = 10;
		  cout << num << endl;


	return 0;
}
// >>>>>>>>>>_____ both program using the call by refrence______>>>>>>>>> .
#include<iostream>
using namespace std;
void  refrence(int (&arr)[10], int &a) {
	arr[a];
	for (int i = 0; i < 10; i++) {
		cout << arr[i];
	}
	
}
int main(){
	int s=10;
	int arr[10];
	cout << " enter the arr input " << endl;
	for (int i = 0; i < 10; i++) {
		cin>>  arr[i];
	}

	refrence(arr,s);
	

	return 0;
}
