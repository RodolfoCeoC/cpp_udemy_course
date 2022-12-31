#include <iostream>

using namespace std;

double half(double numb_1, double numb_2) {

    double result;
    result = (numb_1 + numb_2) / 2;
    return result;
}

int main() {

    double numb_1 = 2.3;
    double numb_2 = 2.9;
    double result = half(numb_1, numb_2);

    cout << "The result is " << result << endl;
    return 0;
}