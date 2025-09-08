#include<iostream>
#include<fstream>
using namespace std;
int word_strat_with_vowel( ifstream & word_strat_with_vowel ){

	char arr[100];
	ofstream write("doxs.txt");

	

	while (!word_strat_with_vowel.eof()) {
		word_strat_with_vowel.getline(arr, 100, ' ');
		cout << arr << endl;
		if (arr[0]=='a'|| arr[0] == 'i'|| arr[0] == 'e'|| arr[0] == 'o'|| arr[0] == 'u'){
			write << arr << endl;
		}
	}





	return 0;
}
int main() {

	ifstream read("dox.txt");
	




	word_strat_with_vowel(read);
	return 0;
}