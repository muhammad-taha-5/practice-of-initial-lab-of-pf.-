#include <iostream>
using namespace std; 

void quadratic(float a, float b, float c, float d, float x, float& y);

int main() {
    float a, b, c, d, x, y;

    cout << "Enter coefficients a, b, c, d: ";
    cin >> a >> b >> c >> d;
    cout << "Enter value of x: ";
    cin >> x;

    quadratic(a, b, c, d, x, y);
    std::cout << "Result (y): " << y << std::endl;

    return 0;
}


void quadratic(float a, float b, float c, float d, float x, float& y) {
    y = a * x * x * x + b * x * x + c * x + d;
}