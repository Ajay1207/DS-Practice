#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H

#include <iostream>

using namespace std;
class MyLinkedList
{

private:

    class node{
    public:
        int data;
        node *next;
    };

    node *root = NULL;
    node *leaf = NULL;
    node *createNewNode(int data);
    int size;
public:





    int Size();
    void insert(int data);
    void removeat(int location);
    void print();

    MyLinkedList();
    ~MyLinkedList();
};


#endif // MYLINKEDLIST_H
