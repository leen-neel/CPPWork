#include <iostream>

#define MAX 5

using std::cout;
using std::endl;

class Stack
{

    int arr[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int data)
    {

        if (top == MAX - 1)
        {
            cout << "Stack is full" << endl;
            return;
        }

        top++;
        arr[top] = data;
    }

    int pop()
    {

        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }

        int data = arr[top];
        top--;
        return data;
    }

    void display()
    {

        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }

        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
