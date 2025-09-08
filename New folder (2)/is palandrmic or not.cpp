#include <iostream>
using namespace std; 

int palandrmic(int num){
	
	int rev ;
    int lastdig ;
	while (num > 0){
		 lastdig = num % 10;
		 rev  = rev*10 + lastdig;
		num = num / 10;
	}
	if (num == rev){
		cout << " this same no as same " << endl;
		cout << " reversed num" << rev << endl;
	}
	else {
		cout << " this is not  same no as same " << endl;
	}
	return rev;
}

int  main(){
	int rev =palandrmic(121);
	cout<< " reversed "<< rev<< endl;
	return 0;
}

// factorial wala function_________________>>>__________>>>


#include <iostream>
using namespace std; 
int facto(int num){

	int facts = 1;
	for (int i = num; i > 0; i--) {
		facts *= i;
	}
	return facts ;
}

int  main(){
	cout << facto (5);
	return 0;
}

