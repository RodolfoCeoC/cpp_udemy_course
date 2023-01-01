#include <iostream>

using namespace std;

class animal
{
public:
    void eat()
    {
        cout << "The animal eats" << endl;
    }
    void sleep()
    {
        cout << "The animal sleeps" << endl;
    }
};

class dog : public animal  /* here we inherit the functions of the animal class */
{
public:
    void bark()
    {
        cout << "The dog barks" << endl;
    }
    void eat()
    {
        cout << "The dog eats" << endl;
    }
};

int main()
{

    /* animal animal_1;
    animal_1.eat();
    animal_1.sleep(); */

    dog dog_1;
    dog_1.eat();
    dog_1.bark();

    return 0;
}