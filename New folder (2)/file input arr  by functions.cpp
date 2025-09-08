#include<iostream>
#include<fstream>
using namespace std;

void fun (){
	int arr[10];
	cout << " enter the arr as input " << endl;
	for (int i = 0; i < 10; i++ ) {
		cout << i << " ";
		cin >> arr[i];
	}
	// for concoule  out put 
	for (int i = 0; i < 10; i++) {
		cout<<arr[i];
	}
	// for writting inthe file 
	ofstream write("dox.txt");
	if (write.is_open ()) {
		for (int i = 0; i < 10; i++) {
			write << arr[i];
			cout << " susseccfully written inthe file mubarak hoooooooooooooooo" << endl;
		}
	}else {
	    cout<< " closed"<< endl;
	}
}
int main(){
  fun();

	
	return 0;
}
