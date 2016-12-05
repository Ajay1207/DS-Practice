#include "customqueue.h"

CustomQueue::CustomQueue()
{

}

CustomQueue::QNode *CustomQueue::newNode(int data)
{
    QNode *node = new QNode;
    node->data = data;
    node->next = NULL;
    return node;
}

CustomQueue::MyQueue *CustomQueue::createQueue()
{
    MyQueue *Q = new MyQueue();
    Q->front = NULL;
    Q->rear = NULL;
    return Q;
}

void CustomQueue::enqueue(MyQueue *Q, int data)
{
    QNode *temp = newNode(data);

    if(Q->rear == NULL)
    {
        Q->front = Q->rear = temp;
        return;
    }

    Q->rear->next = temp;
    Q->rear = temp;
}


int CustomQueue::dequeue(MyQueue *Q)
{
    if(Q->front == NULL)
    {
        return NULL;
    }

    QNode *temp = Q->front;
    Q->front = Q->front->next;
    if(Q->front==NULL)
        Q->rear = NULL;
    int tempData = temp->data;
    free(temp);
    return tempData;

}
