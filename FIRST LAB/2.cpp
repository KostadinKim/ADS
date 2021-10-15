// Queue
// FIRST IN FIRST OIT - "FIFO"
// LAST IN LAST OUT - "LILO"
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
class Q
{
public:
    Node *front;
    Node *back;
    int size;
    Q()
    {
        front = NULL;
        back = NULL;
        size = 0;
    }
    // 2-Q(20)
    // 1-Q(10)
    void push(int data)
    {
        Node *node = new Node(data);
        if (size == 0)
        {
            front = back = node;
        }
        else
        {
            back->next = node;
            back = node;
        }
        size++;
    }
    void pop()
    {
        if (front != NULL)
        {
            front = front->next;
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
    Q *q = new Q();
    while (1)
    {
        string s;
        cin >> s;
        // push
        if (s == "push")
        {
            int n;
            cin >> n;
            q->push(n);
            cout << "ok" << endl;
        }
        // pop
        else if (s == "pop")
        {
            if (q->front != 0)
            {
                cout << q->front->data << endl;
                q->pop();
            }
            else
            {
                cout << "error" << endl;
            }
        }
        // front
        else if (s == "front")
        {
            if (q->front != 0)
            {
                cout << q->front->data << endl;
            }
            else
            {
                cout << "error" << endl;
            }
        }
        // back
        else if (s == "back")
        {
            cout << q->back->data << endl;
        }

        // size
        else if (s == "size")
        {
            cout << q->sz() << endl;
        }
        // clear
        else if (s == "clear")
        {
            Q *q1 = new Q();
            swap(q, q1);
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