#include<iostream>
#include<fstream>
using namespace std; 

int GCD(int &n1, int &n2){
	int gcd = 0;
	n1 = 36;
	n2 = 46;
	for (int i = 0; i < 30; i++ ) {
		if (n1%i==0 && n2%i== 0){
				gcd = i ;

		}
	}

	cout << gcd << endl;

	 return gcd; 
}

int main(){
	ifstream read("dox.txt");
	int n1, n2 = 0;
	read >> n1;
	cout << n1;

	read >> n2;
	cout << n2;
	cout << endl;


	GCD(n1,n2);



	return 0;
}
