#include< iostream>
#include<fstream>
using namespace std;
int read_sum(ifstream & read_sum) {
	int sum =0;
	int num=0; 
	while (!read_sum.eof()){
		read_sum >> num;

		sum += num;
	}
	cout << sum << endl;


	return sum;
}
int main() {
	ifstream re("dox.txt");

	cout << read_sum(re);
	return 0; 
}