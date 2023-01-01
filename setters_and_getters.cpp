#include <iostream>

using namespace std;

class Students
{
private:
    string subject;

public:
    string name;
    int age;
    double score;

    Students()
    {
        name = "Not assigned";
        age = 0;
        score = 0;
    }

    Students(string student_name, string student_subject, int student_age, double student_score)
    {
        name = student_name;
        age = student_age;
        score = student_score;
        define_subjects(student_subject);
    }

    bool pass_grade()
    {
        if (score >= 70)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void define_subjects(string student_subject)
    {
        subject = student_subject;
    }

    string get_subject()
    {
        return subject;
    }
};

int main()
{
    Students student_1("Darkness", "Mathematics", 20, 95.3);

    Students student_2("Michael", "History", 50, 70.5);

    Students student_3("Json", "Programming", 39, 65.7);

    /* student_1.define_subjects("Mathematics"); */

    cout << student_1.pass_grade() << endl;
    cout << student_2.pass_grade() << endl;
    cout << student_3.pass_grade() << endl;

    cout << student_1.get_subject() << endl;
    cout << student_2.get_subject() << endl;
    cout << student_3.get_subject() << endl;

    return 0;
}