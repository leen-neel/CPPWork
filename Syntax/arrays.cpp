#include <iostream>

using namespace std;

int main()
{

    int nums[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number: ";
        cin >> nums[i];
    }

    cout << "\n";

    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << " ";
    }

    cout << "\n";
}
