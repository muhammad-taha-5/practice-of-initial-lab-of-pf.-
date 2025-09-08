#include<iostream>
#include<fstream>
using namespace std; 
int main(){
	char arr[20];
	ifstream read("dox.txt");
	if (read.is_open() ){
		cout << " opended" << endl;

		read >> arr;
		cout << arr << endl;
		char up[10];
		char low[10];
		int index = 0;
		int index2 = 0; 
		for (int i = 0; arr[i]!='\0'; i++) {
          
			if (arr[i] >= 'a' && arr[i] <= 'z') {

				low[index++] = arr[i];
			}
			else {
				up[index2++] = arr[i];
			}
			

		}

		for (int i = 0; i < 10; i++) {
			cout << low[i];
		}
		for (int i = 0; i < 10; i++) {
			cout << up[i];
		}





	}




	return 0; 
}