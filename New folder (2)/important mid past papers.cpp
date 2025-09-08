#include<iostream>
#include<fstream>
using namespace std; 
int main(){
	char arr[10];
	cout << " enter the name of any fruit  " << endl; 
	cin >> arr;
	char name[10];
	
	ifstream read("dox.txt");
	while (!read.eof() ){
		bool found = true;
		read >> name; 
		cout << name << endl;
		// now compearing 
		for (int i = 0; name[i] != '\0';i++){
			if (name[i]!=arr[i]){
				found = false;
				break; 

			}
		}
		if (found == true){
			cout << " yes found 1 " << endl;
			ifstream reads("dogs.txt");
			char name2[10];
			while (!reads.eof()) {
				reads >> name2;
				bool founds = true;
				for (int i = 0; name[i] != '\0'; i++){
					if (name2[i] != arr[i]){
						founds = false;
						break;

					}
				}

				if (founds == true){
					char arr2[100];
					reads.getline(arr2, 100,'\n');
					cout << "this will the whole details " << arr2<< endl;
				}
			}
			

    
		}
		else {
			cout << " not found in the file " << endl;
			break;
			break;

		}
	}














	return 0; 
}