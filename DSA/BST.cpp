#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = nullptr;
    }
};

class BinarySearchTree
{
private:
    Node *root;

    // Helper function for inorder traversal
    void inorderTraversal(Node *node)
    {
        if (node != nullptr)
        {
            inorderTraversal(node->left);
            cout << node->data << " ";
            inorderTraversal(node->right);
        }
    }

    // Helper function for preorder traversal
    void preorderTraversal(Node *node)
    {
        if (node != nullptr)
        {
            cout << node->data << " ";
            preorderTraversal(node->left);
            preorderTraversal(node->right);
        }
    }

    // Helper function for postorder traversal
    void postorderTraversal(Node *node)
    {
        if (node != nullptr)
        {
            postorderTraversal(node->left);
            postorderTraversal(node->right);
            cout << node->data << " ";
        }
    }

public:
    BinarySearchTree()
    {
        root = nullptr;
    }

    // Insert a new node into the tree
    void insert(int data)
    {
        Node *newNode = new Node(data);
        Node *current = root;

        if (root == nullptr)
        {
            root = newNode;
            return;
        }

        while (true)
        {
            if (data < current->data)
            {
                if (current->left == nullptr)
                {
                    current->left = newNode;
                    return;
                }
                else
                {
                    current = current->left;
                }
            }
            else
            {
                if (current->right == nullptr)
                {
                    current->right = newNode;
                    return;
                }
                else
                {
                    current = current->right;
                }
            }
        }
    }

    // Perform inorder traversal
    void inorder()
    {
        inorderTraversal(root);
        cout << endl;
    }

    // Perform preorder traversal
    void preorder()
    {
        preorderTraversal(root);
        cout << endl;
    }

    // Perform postorder traversal
    void postorder()
    {
        postorderTraversal(root);
        cout << endl;
    }
};

int main()
{
    BinarySearchTree bst;

    bst.insert(10);
    bst.insert(20);
    bst.insert(30);

    cout << "Inorder traversal: ";
    bst.inorder();

    cout << "Preorder traversal: ";
    bst.preorder();

    cout << "Postorder traversal: ";
    bst.postorder();

    return 0;
}
