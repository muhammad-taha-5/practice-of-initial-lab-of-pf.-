#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream read("dox.txt");
	char id[10] ,ch;
	int day, min, med, rt;
	if (read.is_open()) {

			int total = 0; 
		while (!read.eof() ){
			read >> id >> ch >> day >> min >> med;
			cout << id << " " << ch << " " << day << " " << min <<" " << med << " " << endl;
			int Room_charges = 0; 
			if (ch == 'p'|| ch == 'P'){
				Room_charges = 5125;
				total = Room_charges * day + min * 1.75 + med;
				cout << id << " total :" << total << endl;
			}
			else if(ch == 'S' || ch == 's'){
				Room_charges = 3195;
				total = Room_charges * day + min * 1.75 + med;
				cout << id << " total :" << total << endl;
			}
			else {
				Room_charges = 1075;
				total = Room_charges * day + min * 1.75 + med;
				cout << id << " total :" << total << endl;
			}
			
			

		}


			read.close();



	}
	return 0; 
}