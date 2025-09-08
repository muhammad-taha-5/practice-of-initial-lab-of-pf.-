#include <iostream>
#include <fstream>
using namespace std; 
int main(){
	int eng =0 ;
	int ur =0;
	int cs = 0; 
	char roll_num[20];
	ifstream read ("dox.txt");
	ofstream write("txt.txt");
	read.getline(roll_num, 20 ,',');
	cout << roll_num;
	write << roll_num;
	cout << endl;

	read.getline(roll_num, 20, ',');
	cout << roll_num;
	write << roll_num;
	cout << endl;

	int sum = 0; 
	read >> cs; 
	cout << cs; 
	sum += cs;
	write << " "<< cs ;

	read >> eng;
	cout << eng ;
	sum += eng;
	write << " " <<eng ;

	read >> ur ;
	cout << ur ;
	sum += ur;
	write << " " << ur ;
	cout << endl;
	float  ave = sum / 3;
	cout << ave ;

	
	
		
	
	



	return 0;
}