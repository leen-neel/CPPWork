#include <iostream>

#define MAX 5

using std::cout;
using std::endl;

class Queue
{

    int arr[MAX];
    int front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int data)
    {

        if (rear == MAX - 1)
        {
            cout << "Queue is full" << endl;
            return;
        }

        if (front == -1)
        {
            front++;
        }

        arr[++rear] = data;
    }

    void dequeue()
    {

        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        front++;
    }

    void display()
    {

        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{

    Queue s;

    s.enqueue(10);
    s.enqueue(20);
    s.enqueue(30);

    s.dequeue();

    s.display();

    return 0;
}
