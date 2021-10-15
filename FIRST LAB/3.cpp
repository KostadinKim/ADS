#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
class DQ
{
public:
    int size;
    Node *front;
    Node *back;
    DQ()
    {
        size = 0;
        front = NULL;
        back = NULL;
    }
    void push_front(int data)
    {
        Node *node = new Node(data);
        if (size == 0)
        {
            front = back = node;
        }
        else
        {
            node->next = front;
            front->prev = node;
            front = front->prev;
        }
        size++;
    }
    void push_back(int data)
    {
        Node *node = new Node(data);
        if (size == 0)
        {
            front = back = node;
        }
        else
        {
            node->prev = back;
            back->next = node;
            back = back->next;
        }
        size++;
    }
    void pop_front()
    {
        if (front == NULL)
        {
            back = NULL;
        }

        else
        {
            front = front->next;
        }
        size--;
    }
    void pop_back()
    {
        if (back == NULL)
        {
            front = NULL;
        }
        else
        {
            back = back->prev;
        }
        size--;
    }
    int sz()
    {
        return this->size;
    }
};
int main()
{
    DQ *dq = new DQ();
    while (1)
    {
        string s;
        cin >> s;
        if (s == "push_front")
        {
            int n;
            cin >> n;
            dq->push_front(n);
            cout << "ok" << endl;
        }
        else if (s == "push_back")
        {
            int n;
            cin >> n;
            dq->push_back(n);
            cout << "ok" << endl;
        }
        else if (s == "pop_front")
        {
            if (dq->front != 0)
            {
                cout << dq->front->data << endl;
                dq->pop_front();
            }
            else
            {
                cout << "error" << endl;
            }
        }
        else if (s == "pop_back")
        {
            if (dq->size != 0)
            {
                cout << dq->back->data << endl;
                dq->pop_back();
            }
            else
            {
                cout << "error" << endl;
            }
        }
        else if (s == "front")
        {
            if (dq->size != 0)
            {
                cout << dq->front->data << endl;
            }
            else
            {
                cout << "error" << endl;
            }
        }
        else if (s == "back")
        {
            if (dq->size != 0)
            {
                cout << dq->back->data << endl;
            }
            else
            {
                cout << "error" << endl;
            }
        }
        else if (s == "size")
        {
            cout << dq->sz() << endl;
        }
        else if (s == "clear")
        {
            DQ *dq1 = new DQ();
            swap(dq, dq1);
            cout << "ok" << endl;
        }

        else if (s == "exit")
        {
            cout << "bye" << endl;
            return 0;
        }
    }
}