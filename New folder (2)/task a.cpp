#include<iostream>
#include<fstream>
using namespace std; 

void fun (int num ) {
	int sum = 0; 
	for (int i = 0; i < num; i++ ) {
		sum += i;
		cout << "+" << i ;
		if ( sum > num){
			break; 
		}
		else {
			continue;
		}
	}
}

int main(){



	fun(9); 
	return 0; 
}