#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream read("dox.txt");
	char book_name[100];
	char author_name[100];
	int num;
	ofstream write("doxs.txt");
	
	if (!read.is_open()) {
		cout << "ERROR!" << endl;
		return 0;
	}

	char  name_of_the_book[50] = { '\0' };

	cout << "Enter book name: ";
	cin >> name_of_the_book;

	// now for searching the book name  
	while (read >> book_name >> author_name >> num) {
		cout << book_name << "||" << author_name << "||" << num << endl;
		bool fund = true;
		int i = 0;
		while (book_name[i] != '\0') {

			if (book_name[i] != name_of_the_book[i]) {
				fund = false;
			}
			i++;
		}
		if (fund == true){
			write << book_name << " " << author_name << " " << num << endl;
		}
		else if (fund == true) {

			cout << " book not found " << endl;
		}
		else {
			cout << " book not found " << endl;
		}
	}



	return 0;
}