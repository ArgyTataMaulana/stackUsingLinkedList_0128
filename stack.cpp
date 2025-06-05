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

        //push operation: insert an element onto the top of the stack
        int push(int value)
        {
            Node *newNode =new Node(); // 1. allocate memory for the new node 
            newNode->data = value;     // 2. assign the value
            newNode->next = top;       // 3. set the next pointer of the new node to the current top node
            top = newNode;             // 4. Update the top pointer to the new node
            cout << "Push value: " << value << endl;
            return value;
        }

        // isEmpty operation: check if the stack is empty
        bool isEmpty()
        {
            return top == NULL; // Return true if the top pointer is NULL, indicating an empty stack
        }

        // pop operation: remove the topmost element from the stack
        void pop()
        {
            if (isEmpty())
            {
                /* code */
                cout << "Stack is empty." << endl;
                return; // if the stack is empty, print a message and return.
            }
            cout << "Popped value: " << top->data << endl;
            top = top->next; // update the top pointer to the next node in the stack
        }
        // peek/top operation: retrieve the value of the topmost element without removing it
        void peek()
        {
            if (isEmpty())
            {
                /* code */
                cout << "List is empty: " << endl;
                return; // if the stack is empty, print a message and return.
            
        }
        else{
            Node *current = top;
            while (current != NULL)
            {
                /* code */
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout <<endl;
        }//return the value of the top node
    }
};