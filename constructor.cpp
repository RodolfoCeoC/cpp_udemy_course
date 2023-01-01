#include <iostream>

using namespace std;

class Students {
public:
    string name;
    int age;
    double score;

    Students() {
        name = "Not assigned";
        age = 0;
        score = 0;
    }
    Students(string student_name, int student_age, double student_score) {
        name = student_name;
        age = student_age;
        score = student_score;
    }
};

int main() {

    Students student_1("Darkness", 20, 95.3);

    Students student_2;

    cout << student_1.name << endl;
    cout << student_2.name << endl;

    return 0;
}