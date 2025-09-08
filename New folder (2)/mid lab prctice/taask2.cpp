// Write a program to remove all blank spaces from a file and save the modified content.
#include<iostream>
#include<fstream>
#include <cstring>
using namespace std; 

int main() {
	ifstream read("dox.txt");
ofstream write("dox.txt",ios::app);

           if (read.is_open()) {
	         cout << " opend " << endl;
           }
		   else {
			   cout << "not OPened " << endl;
		   }

		}
		
		
		
			for (int i = 0; arr[i] != '/0'; i++) {
				cout << ch[i];
			}
	}
	else
	{
		cout << " not opend " << endl;
	}



	return 0; 
}