#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        // if the key is found
        if (arr[i] == key)
        {
            // return the index
            return i;
        }
    }
    // if the key is not found
    return -1;
}

int main()
{
    int arr[] = {3, 4, 1, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7;

    // call the linear search function
    int index = linearSearch(arr, n, key);

    // if the key is found
    if (index != -1)
    {
        cout << "Element found at index " << index << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
