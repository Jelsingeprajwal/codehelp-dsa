#include <iostream>
#include <queue>
using namespace std;

class Queue
{
private:
    int size;
    int qfront;
    int qrear;
    int *arr;

public:
    Queue(/* args */)
    {
        size = 100001;
        arr = new int[size];
        qfront = qrear = 0;
    }
    void enqueue(int data)
    {
        if (qrear == size)
        {
            cout << "queue is full";
        }
        else
        {
            arr[qrear] = data;
            qrear++;
        }
    }

    int dequeue()
    {
        if (qfront == qrear)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront == qrear)
            {
                qfront = qrear = 0;
            }
            return ans;
        }
    }

    int front()
    {
        if (qfront == qrear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }

    bool isEmpty()
    {
        if (qfront == qrear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    // create a queue
    // queue<int> q;

    // // add element
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // cout << "size of the queue " << q.size() << endl;
    // // remove element
    // q.pop();
    // cout << "size of the queue " << q.size();

    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout << "front: " << q.front() << endl;
    q.dequeue();
    cout << "front: " << q.front() << endl;

    Queue *q1 = new Queue;

    q1->dequeue();

    return 0;
}
