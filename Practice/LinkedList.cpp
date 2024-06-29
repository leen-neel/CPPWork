#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class LinkedList
{

public:
    Node *head;
    Node *tail;

    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void append(int data)
    {

        if (!head)
        {
            head = new Node(data);
            tail = head;
            return;
        }

        tail->next = new Node(data);
        tail = tail->next;
    }

    void prepend(int data)
    {
        Node *newHead = new Node(data);
        newHead->next = head;
        head = newHead;
    }

    // remove last element
    void deleteEnd()
    {

        if (head == tail)
        {
            delete head;
            head = nullptr;
            tail = nullptr;
            return;
        }

        Node *secondLast = head;

        while (secondLast->next->next != nullptr)
        {
            secondLast = secondLast->next;
        }

        tail = secondLast;
        secondLast->next = nullptr;
    }

    // remove from beginning
    void removeFirst()
    {
        if (head)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }

    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList list;
    list.append(5);
    list.append(10);
    list.append(15);

    list.deleteEnd();

    list.display();
    return 0;
}
