#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{

    int low = 0;
    int high = n - 1;

    while (low <= high)
    {

        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (key < arr[mid])
        {
            high = mid - 1;
        }

        else
        {
            high = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 7};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Found at " << binarySearch(arr, n, 4) << endl;
}
