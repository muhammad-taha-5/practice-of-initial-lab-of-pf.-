#include <iostream>
#include <fstream>

using namespace std;

int main() {

    char arr[20];

    ofstream  write("wordss.txt");
    ifstream read("file.txt");

    read >> arr;
    cout << arr << endl;

    cout << endl;


    if (write.is_open()) {

        for (int i = 3; i >= 0; i--) {
            cout << arr[i];
            write << arr[i];
        }
    }
    else {
        cout << "not opend " << endl;
    }

    cout << endl;


    read >> arr;
    cout << arr << endl;


    if (write.is_open()) {

        for (int i = 4; i >= 0; i--) {

            cout << arr[i];
            write << arr[i];

        }


    }
    else {
        cout << "not opend " << endl;
    }


    cout << endl;

    read >> arr;
    cout << arr << endl;


    if (write.is_open()) {

        for (int i = 4; i >= 0; i--) {
            cout << arr[i];
            write << arr[i];

        }



    }
    else {
        cout << "not opend " << endl;
    }
    cout << endl;
    system("pause");
    return 0;
}