//#include<iostream>
//using namespace std; 
// 
//int main() {
//
//	int arr[3][5] = {
//	1, 2, 3, 4, 5,
//	6, 7, 8, 9, 1,
//	1, 2, 3,4, 5
//	};
//
//	
//
//
//	int sum;
//	int mult;
//	for (int r = 0; r < 3; r++) {
//		sum = 0; 
//		mult = 1;
//		for (int c = 0; c < 5; c++) {
//			//cout << "arr[" << r << "]"<< "arr[" << c << "]=";
//			//cin >> arr[r][c];
//
//			cout << arr[r][c]<< " ";
//			sum = sum + arr[r][c];
//			// now for multiply
//			mult = mult * arr[r][c];
//		}
//		cout <<  endl;
//		cout << sum << " " << endl;
//		cout <<  "multiply "<< mult << " " << endl;
//
//	}
//	cout << "__________________\n";
//
//	// now for searching the arr element
//
//	int key; 
//	int  f = 0;
//	cout << " enter the key " << endl;
//	cin >> key; 
//	bool found = false; 
//	for (int r = 0; r < 3; r++) {
//		found = false;
//		for (int c = 0; c < 5; c++){
//			if (key == arr[r][c]){
//				f = arr[r][c];
//				found = true;
//				break;
//			}
//			
//		}
//
//	}
//
//
//	if (found == true) {
//		cout << "  found that num " << f << endl;
//	}
//
//	return 0; 
// }