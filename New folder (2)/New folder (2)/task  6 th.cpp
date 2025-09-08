#include<iostream>
#include<fstream >
using namespace std; 

void file (ifstream &file){
	int a[5];
	for (int i = 0; i < 5; i++) {
	file >> a[i];
	cout << a[i];
	}
	cout << endl;
 // this arr is  filled  
	cout << "this arr is  filled   " << endl;
	for (int i = 0; i < 5; i++) {
		cout << a[i];
	}

}




int main() {
	ifstream read("doxx.txt");
	file(read);

	return 0;
}