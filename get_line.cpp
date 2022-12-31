#include <iostream>

using namespace std;

int main() {

    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name); /* getline is used for strings */
    cout << "Enter your age: ";
    cin >> age;

    cout << "Your name is " << name << " and you are " << age << " years old" << endl;

    if (age >= 18) {
        cout << "You are an adult";
        
    }else{
        cout << "You're not an adult";
    }
    return 0;
}