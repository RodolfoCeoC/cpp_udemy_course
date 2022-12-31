#include <iostream>

using namespace std;

void hello(string name, int age){  /* void is used when the function returns nothing */

    cout << "Hello " << name << " you are " << age << " year old" << endl;
}

int main() {

    string name = "Darkness";
    int age = 25;

    hello(name, age);
    hello("Jason", 30);
    hello("Michael", 40);
    return 0;
}