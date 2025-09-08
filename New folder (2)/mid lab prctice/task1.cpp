
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main() {

	ifstream read("taha.txt");
	ofstream write("taha.txt" ,ios::app);
	

	char arr[100];
	bool found = false;

	//cout << "f ";
	if (read.is_open()) {
		cout << "  opened " << endl;

		read.getline(arr, 100, ' ');
		cout << arr << endl;

		string s;
		cout << "enter the string " << endl;
		cin >> s;

		while (read >> arr) {
			for (int i = 0; arr[i] != '/0' && i < s.length(); i++) {
				if (arr[i] == s[i]){
					found = true;
				}
				if (write.is_open()) {
				string ss; 
				cout << " enter the arr chaged arr " << endl;
				cin >> ss;
					arr[i] = ss[i];
					write << arr[i];
				}
				else {
					cout << " file not opened " << endl;
				}
			}
		}
		if (found == true) {
			cout << "found" << endl;

		}
		else {
			cout << "not found" << endl;
		}


	}
	else {
		cout << " not opened " << endl;
	}




	return 0;
}