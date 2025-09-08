#include<iostream>
#include< fstream>
using namespace std; 
int total ( int a ,int b , int c ) {

	int sum = a + b + c;

	return sum ;
}

  bool quilification (int result){

	if (result >240){

		return 1;
	}
	else {
		return 0;
	}



	 
}
int main(){
	ifstream read("dox.txt");
	ofstream write("dogs.txt");
	int a, eng, urd, sindhi=0;
	char  name[10];
	while ( !read.eof() ){
		read >> a >> name >> eng >> urd >> sindhi;
	  cout << a << " " << name << " " << eng << " " << urd << " " << sindhi << " " << endl;

	  int result = total( eng,urd, sindhi);
		if (quilification(result) == 1) {



			write << "this the  ID  num : " << a << " this the  name " << name << " this the total " << total(eng, urd, sindhi) << "this the quilification " << " : quilified " << endl;
		}
		else {
			write << "this the  ID  num : " << a << " this the  name " << name << " this the total " << total(eng, urd, sindhi) << "this the quilification " << " :  not quilified " << endl;
		}
	}








	return 0; 
}