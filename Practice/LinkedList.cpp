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

    // remove from beginning
    void remove()
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

    list.remove();

    list.display();
    return 0;
}
