#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // if the key is found
        if (arr[mid] == key)
        {
            // return the index
            return mid;
        }

        // if the key is less than the middle element
        else if (key < arr[mid])
        {
            // update the high
            high = mid - 1;
        }

        // if the key is greater than the middle element
        else
        {
            // update the low
            low = mid + 1;
        }
    }

    // if the key is not found
    return -1;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7;

    // call the binary search function
    int index = binarySearch(arr, n, key);

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

// Output:
// Element found at index 4
