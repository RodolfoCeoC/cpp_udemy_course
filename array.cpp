#include <iostream>

using namespace std;

int main() {

    int age[] = {10, 20, 30, 40, 50};
    age[5] = 60;  /* I add a new element */
    age[6] = 70;
    cout << age[5] <<endl; /* print a specific position */
    return 0;
}