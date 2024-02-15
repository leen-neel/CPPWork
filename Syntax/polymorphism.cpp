#include <iostream>

using namespace std;

// Base class
class Animal
{
public:
    void animalSound()
    {
        cout << "The animal makes a sound \n";
    }
};

class Pig : public Animal
{
public:
    void animalSound()
    {
        cout << "The pig says: wee wee \n";
    }
};

int main()
{

    Pig john;

    john.animalSound();
}
