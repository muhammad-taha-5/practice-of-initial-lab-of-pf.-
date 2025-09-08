#include<iostream>
#include<fstream>
using namespace std;
void read(ifstream & read) {
	int n;
	
	if (read.is_open() ) {
		read >> n;
		cout << n;
	}
	else {
		cout << " error " << endl;
	}
	
	

	
}
int main() {
	ofstream write("dox.txt");
	int n = 0;
	cout << " enter the num " << endl;
	cin >> n;
	// no need to open the file of write because it is already opened 
	write << n;
	write.close();
	ifstream  re("dox.txt");

	   read(re);

	return 0;
}