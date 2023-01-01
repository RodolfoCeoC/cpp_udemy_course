#include <iostream>

using namespace std;

class Students {
public:
    string name;
    int age;
    double score;
};

int main() {

    Students student_1;
    student_1.name = "Darkness";
    student_1.age = 20;
    student_1.score = 95.3;
    
    Students student_2;
    student_2.name = "Michael";
    student_2.age = 50;
    student_2.score = 75.6;

    cout << student_1.name;

    return 0;
}