#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{

    int a, b = 0;
    cout << "Enter a number : ";
    cin >> a;

    cout << "Enter another number : ";
    cin >> b;

    int result = add(a, b);
    cout << "Sum is : " << result << endl;

    return 0;
}
