#ifndef CUSTOMQUEUE_H
#define CUSTOMQUEUE_H
#include<cstdlib>

#include <limits.h>
class CustomQueue
{
    struct QNode
    {
        int data;
        QNode *next;
    };



    QNode *newNode(int data);


public:

    struct MyQueue
    {
        QNode *front,*rear;
    };
    MyQueue *createQueue();

    CustomQueue();
    void enqueue(MyQueue *Q, int data);
    int dequeue(MyQueue *Q);

};

#endif // CUSTOMQUEUE_H
