#include <iostream>
using namespace std;

// node class representing a single node in the linked list

class Node
{
    public:
        int data;
        Node *next;
        Node()
        {
            next = NULL;
        }
};

//stackclass
class Stack
{
    private:
    Node *top;// pointerto the top node of the stack

    public:
        Stack()
        {
            top = NULL; // initialize the stack with a null top pointer
        }

        
};