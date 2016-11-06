#ifndef CUSTOMLINKEDLIST_H
#define CUSTOMLINKEDLIST_H
#include <stdio.h>
#include<cstdlib>
#include<iostream>
#include<stdexcept>

using namespace std;

class CustomLinkedList
{
    struct node
    {
        int data;
        node *next;
    };


    node *head;

public:
    CustomLinkedList();
    void append_last(int value);
    void insert(int location, int value);
    void erase(int location);
    void swap(int x, int y);
};

#endif // CUSTOMLINKEDLIST_H
