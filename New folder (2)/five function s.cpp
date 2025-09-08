// main function prime no sum and multi sort that arrand and searching 
#include<iostream>
using namespace std;
// just for function of prime .
bool is_prime(int arr[10]) {

	cout << " enter the arr " << endl;
	for (int i = 0; i < 10; i++) {
		cout << " the index is " << i << " :" << endl;
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++) {
		// this temperary condition I have sited my own . 
		if (arr[i] % 2 == 0 || arr[i] % 9 == 0 || arr[i] % 4 == 0) {

			cout << "  not prime " << arr[i] << endl;
		}
		else {
			cout << "this the prime " << arr[i] << endl;
		}
	}
}
// just for function of sum.
int sum() {
	int arr[10];
	cout << " enter the arr " << endl;
	for (int i = 0; i < 10; i++) {
		cout << " the index is " << i << " :" << endl;
		cin >> arr[i];
	}
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += arr[i];
	}
	cout << sum;
	return sum;
}
// just for function of multi .
int multi() {
	int arr[10];
	cout << " enter the arr " << endl;
	for (int i = 0; i < 10; i++) {
		cout << " the index is " << i << " :" << endl;
		cin >> arr[i];
	}
	int mult = 0;
	for (int i = 0; i < 10; i++) {
		mult *= arr[i];
	}
	cout << mult;
	return mult;
}
// just for function of sortting  .
void  sort() {
	int arr[10];
	cout << " enter the arr " << endl;
	for (int i = 0; i < 10; i++) {
		cout << " the index is " << i << " :" << endl;
		cin >> arr[i];
	}
	// now for sortting the arr 
	for (int i = 0; i < 100; i++) {
		int larger = 0;
		if (arr[i] > arr[i + 1]) {
			larger = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = larger;

		}
	}
	// now viwe the arr 
	for (int i = 0; i < 10; i++) {
		cout << arr[i];
	}
}
// just for function of searching  .
void  search() {
	int arr[10];
	cout << " enter the arr " << endl;
	for (int i = 0; i < 10; i++) {
		cout << " the index is " << i << " :" << endl;
		cin >> arr[i];
	}
	// enter the key for searching 
	int key;
	cout << "enter the key to search " << endl;
	cin >> key;
	// now for searching  the arr 
	bool key_found = false;
	for (int i = 0; i < 10; i++) {
		if (arr[i] == key) {
			key_found = true;
			break;
		}
	}
	if (key_found) {
		cout << " yes found " << endl;
	}
	else {
		cout << "not found  " << endl;
	}

}

int main() {
	int arr[10];

	// now for the  manu 
	cout << " this the manu " << endl;
	cout << " 1/ for the cheek of prime  " << endl;
	cout << " 2/ for sum of all index  " << endl;
	cout << " 3/ for multiply all index  " << endl;
	cout << " 4/ for the sortting " << endl;
	cout << " 5/ for the searching   " << endl;

	int choice;
	cout << " enter your choice " << endl;
	cin >> choice;
	if (choice == 1) {
		is_prime(arr);
	}
	else if (choice == 2) {
		sum();
	}
	else if (choice == 3) {
		multi();
	}
	else if (choice == 4) {
		sort();
	}
	else if (choice == 5) {
		search();
	}
	else {
		cout << " you entered the wrong choice " << endl;
	}


	return 0;
}