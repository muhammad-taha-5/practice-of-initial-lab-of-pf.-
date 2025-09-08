// filling and function  read the bill mane and units and then convert it into the total bill
#include<iostream>
#include<fstream>
using namespace std;

int  reads(ifstream  & reads ,ofstream & write){

	char name[100];
	int units ;
	int total_biil; 
	while (reads >>name >> units){
		cout << name << units << endl;
		total_biil = 0;
		// now making bill of ke 
		if (units >= 20 && units <= 30){
			total_biil =units * 10;
		}else if (units >= 30 && units < 40) {
			total_biil = units *20;
		}
		else if (units >= 40 && units <= 50) {
			total_biil = units * 30;
		}
		else if (units >= 50 && units <= 100) {
			total_biil = units * 50;
		}
		else {
			cout << " high range of the units bill will become costant " << endl;
			total_biil = 5000000 ;
		}

		cout << "name" << name << " units  : " << units << "    total_biil   " << total_biil << endl;
		write << "name" << name << " units  : " << units << "    total_biil   " << total_biil << endl;

	}





	return 0; 
}

int main (){
	ifstream red("dox.txt");
	ofstream wr("dogs.txt");
	  reads(red,wr);
	return 0; 
}