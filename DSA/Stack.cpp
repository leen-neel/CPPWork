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
            return -1;
        }

        int data = arr[top];
        top--;
        return data;
    }

    void traverse()
    {

        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }

        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.traverse();

    return 0;
}
