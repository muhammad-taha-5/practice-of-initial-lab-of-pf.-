//#include< iostream>
//using namespace std;
//int main() {
//	int row, colum;
//	cout << "enter numebr of rows and columns ";
//	cin >> row >> colum;
//	int** p1 = new int* [row]; // array of row pointers
//	for (int i = 0; i < row; i++) {
//		p1[i] = new int[colum];  // allocate each row
//	}
//
//	cout<<"enter values ";
//	for (int i = 0; i < row; i++) {
//		for (int j = 0;j < colum; j++)
//		{
//			cin >> p1[i][j];
//
//		}
//	}
//	cout << "inputted values ";
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < colum; j++)
//		{
//			cout<<p1[i][j]<<" ";
//
//		}
//		cout << endl;
//	}
//	
//	int** p2 = new int* [colum]; // array of row pointers
//	for (int i = 0; i < colum; i++) {
//		p2[i] = new int[row];  // allocate each row
//	}
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < colum; j++)
//		{
//			p2[j][i]=p1[i][j] ;
//
//		}
//		
//	}
//	cout << "transposed matrix";
//	for (int i = 0; i < colum; i++) {
//		for (int j = 0; j < rw; j++)
//		{
//			cout << p2[i][j] << " ";
//
//		}
//		cout << endl;
//	}
//
//	return 0; 
//}