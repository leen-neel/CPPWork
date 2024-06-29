#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // flag to check if the array is already sorted
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // insert the key
        arr[j + 1] = key;
    }
}

// selection sort function
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // find the minimum element in the array
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // swap the minimum element with the first element
        if (minIndex != i)
        {
            swap(arr[minIndex], arr[i]);
        }
    }
}

int main()
{

    int arr[] = {2, 4, 5, 3, 1};

    bubbleSort(arr, 5);
    insertionSort(arr, 5);
    selectionSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Output:
// 1 2 3 4 5
