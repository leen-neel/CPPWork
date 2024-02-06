#include <iostream>
#include <string>
using namespace std;

class Cars
{
public:
    string model;
    string color;
};

int main()
{

    Cars verna;

    verna.model = "Verna";
    verna.color = "Black";

    cout << "Car Model : " << verna.model << endl;
    cout << "Car Color : " << verna.color << endl;
}
