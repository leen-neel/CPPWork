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
public:
    Node *head;
    Node *tail;

    LinkedList()
    {
        head = nullptr; // Initialize head to nullptr
        tail = nullptr;
    }

    void append(int data)
    {
        if (!head)
        {
            head = new Node(data);
            tail = head;
        }
        else
        {
            tail->next = new Node(data);
            tail = tail->next;
        }
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
        if (curr && curr->next)
        {
            curr->next = curr->next->next;
        }
    }

    void removeBeginning()
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

    list.remove(2);

    list.display();
    return 0;
}

// Output:
// 5 10
