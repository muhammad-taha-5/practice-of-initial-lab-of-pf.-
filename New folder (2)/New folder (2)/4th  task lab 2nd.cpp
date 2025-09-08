#include <iostream>
using namespace std;
void  sort3(float x, float y, float z) {
	bool is_coorct = false;
	if (x < y) {

		if (y < z) {

			cout << " correct < x < y < z" << x << y << z << endl;

		}
	}

	return;
}

int main() {

	sort3(10.1, 11.3, 13.8);


	return 0;
}