#include <iostream>

using namespace std;

int main() {

    int number_1 = 5;
    int *pnumber_1 = &number_1;

    double number_2 = 2.8;
    double *pnumber_2 = &number_2;

    char word = 'b';
    char *pword = &word;

    cout << pnumber_1 << endl;
    cout << *pnumber_1 << endl;  /* (*) Dereference operator */

    cout << pnumber_2 << endl;
    cout << *pnumber_2 << endl;

    cout << pword << endl;
    cout << *pword << endl;

    return 0;
}