#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream read ("doc.txt");
	int arr[20] = {0};
	int a;
	int index = 0;
	while (!read.eof()){
		read >> a;
		cout <<a;
		arr[index++] = a ;
		read.close();
	}

	// for see the arr  
	
	int c1, c2, c3, c4, c5 = 0; 

	for (int i = 0;arr[i]!='/0'; i++) {

		if (arr[i] > 0){

			c1++;
		}else if (arr[i] <  0){
			
			c2++;
		}
		else if (arr[i] %2==0) {
			
			c3++;
		}
		else if (arr[i] % 2 != 0) {
			
			c4++;
		}
		else if (arr[i] == 0) {
			
			c4++;
		}

	}
	cout << " this the positive " <<c1 << endl;
	cout << " this the negative  " << c2 << endl;
	cout << " this the even " << c3 << endl;
	cout << " this the odd " << c4<< endl;
	cout << " this the zero  " << c5 << endl;
	return 0;
}
