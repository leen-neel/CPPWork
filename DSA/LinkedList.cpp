#include <iostream>

using std::cout;
using std::endl;

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
    Node *head;
    Node *tail;

public:
    LinkedList()
    {
        head = new Node(-1);
        tail = head;
    }

    void append(int data)
    {
        tail->next = new Node(data);
        tail = tail->next;
    }

    void remove(int index)
    {
        int i = 1;
        Node *curr = head;
        while (i < index && curr)
        {
            i++;
            curr = curr->next;
        }

        // Remove the node ahead of curr
        if (curr)
        {
            curr->next = curr->next->next;
        }
    }

    void display()
    {
        Node *temp = head->next;
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

    list.append(1);
    list.append(2);
    list.append(3);

    list.remove(2);

    list.display();

    return 0;
}
