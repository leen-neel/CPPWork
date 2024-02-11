#include <iostream>

using namespace std;

int main()
{

    struct
    {
        string name;
        int age;
        string job;
    } person;

    cout << "Enter your name : ";
    cin >> person.name;

    cout << "Enter your age : ";
    cin >> person.age;

    cout << "Enter your job : ";
    cin >> person.job;

    cout << endl;

    cout << "Your name is " << person.name << endl;
    cout << "Your age is " << person.age << endl;
    cout << "Your job is " << person.job << endl;
}
