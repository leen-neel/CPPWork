#include <iostream>

using namespace std;

int main()
{

    string food = "Pizza";
    cout << &food << endl;

    string &meal = food;
    cout << meal << endl;
}
