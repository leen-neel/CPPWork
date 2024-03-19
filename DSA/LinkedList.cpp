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

    void addBegin(int data)
    {
        Node *new_node = new Node(data);
        if (!head)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            new_node->next = head;
            head = new_node;
        }
    }

    void addAfter(int data, int index)
    {
        if (index < 0)
        {
            cout << "Invalid index." << endl;
            return;
        }

        Node *curr = head;
        int i = 0;
        while (i < index && curr)
        {
            curr = curr->next;
            i++;
        }

        if (!curr)
        {
            cout << "Index out of range." << endl;
            return;
        }

        Node *new_node = new Node(data);
        new_node->next = curr->next;
        curr->next = new_node;

        // Update tail if necessary
        if (curr == tail)
        {
            tail = new_node;
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
    list.addBegin(15);

    list.addAfter(20, 0);

    list.display();
    return 0;
}
