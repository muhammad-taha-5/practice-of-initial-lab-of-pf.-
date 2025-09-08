#include <iostream>
using namespace std; 
int ave( int eng ,int ur , int sin ){
	int sum = 0; 
	float  ave = 0;
	sum = eng + ur + sin;
	ave = sum / 3; 


	return ave;
}

int main() {

	 cout<< ave(30, 40, 50);


	return 0; 
}