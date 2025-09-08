#include<iostream>
#include<fstream>
using namespace std;
int palandorme(ifstream  & palandorme){
	int sum; 
	int num;
	while (palandorme >>num){
		sum += num;
	}

	
	cout << " sum "<< sum  << endl;
	return sum; 
}


int main()
{
	ifstream read ("dox.txt");






	palandorme(read );
	return 0; 
}