#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // Constructor for the node class
    Node()
    {
        leftchild = nullptr; // Intialize left child to null
        rightchild = nullptr; // Intialize right child to null
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // Intializing ROOT to null
    }

    void search(int element, Node *&parent, Node *&currentNode)
  
};