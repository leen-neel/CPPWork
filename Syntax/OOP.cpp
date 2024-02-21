#include <iostream>
#include <string>
using namespace std;

class Cars
{
public:
    string model;
    string color;
};

class Animal
{
public:
    Animal(string test)
    {
        cout << "This is a " << test << endl;
    }
};

int main()
{

    Cars verna;

    verna.model = "Verna";
    verna.color = "Black";

    cout << "Car Model : " << verna.model << endl;
    cout << "Car Color : " << verna.color << endl;

    Animal dog("test");
}
