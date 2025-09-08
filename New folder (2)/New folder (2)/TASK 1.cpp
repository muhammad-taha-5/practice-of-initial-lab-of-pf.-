#include <iostream>
#include < fstream>
using namespace std; 

int  callfile(ifstream &callfile){
	
	int count = 0;
	char arr[15];

	// now here this the name of file bellow decleared    name of file :( callfile )
	callfile.getline(arr,15);
	callfile.ignore(' ');
	for (int i = 0; arr[i] != '\0'; i++){

		if (arr[i] == ' ') {
			i++;
		}
		count++;
	}

	return count;
 }

int main() {
	ifstream read("dox.txt");
	 cout << callfile(read);

	return 0;
}