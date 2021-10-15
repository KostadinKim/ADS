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
        this->next = NULL;
    }
};
class Stack
{

public:
    Node *top;
    int size;
    Stack()
    {
        top = NULL;
        size = 0;
    }
    // Node(20)
    // Node(10) top
    void push(int data)
    {
        Node *node = new Node(data);
        node->next = top;
        top = node;
        size++;
    }
    void pop()
    {
        if (top != NULL)
        {
            top = top->next;
            size--;
        }
    }
    int sz()
    {
        return this->size;
    }
};

int main()
{
    Stack *st = new Stack();
    while (1)
    {
        string s;
        cin >> s;
        // push
        if (s == "push")
        {
            int n;
            cin >> n;
            st->push(n);
            cout << "ok" << endl;
        }
        // pop
        else if (s == "pop")
        {
            if (st->sz() != 0)
            {
                cout << st->top->data << endl;
                st->pop();
            }
            else
            {
                cout << "error" << endl;
            }
        }
        // back
        else if (s == "back")
        {
            if (st->sz() != 0)
            {
                cout << st->top->data << endl;
            }
            else
            {
                cout << "error" << endl;
            }
        }
        // size
        else if (s == "size")
        {
            cout << st->sz() << endl;
        }
        // clear
        else if (s == "clear")
        {
            Stack *st1 = new Stack();
            swap(st, st1);
            cout << "ok" << endl;
        }
        // exit
        else if (s == "exit")
        {
            cout << "bye" << endl;
            return 0;
        }
    }

    return 0;
}