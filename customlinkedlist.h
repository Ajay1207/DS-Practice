#ifndef CUSTOMLINKEDLIST_H
#define CUSTOMLINKEDLIST_H
#include <stdio.h>
#include<cstdlib>
#include<iostream>
#include<stdexcept>

using namespace std;

/**
 * @brief
 *
 */
class CustomLinkedList
{
    /**
     * @brief
     *
     */
    struct node
    {
        int data; /**< TODO */
        node *next; /**< TODO */
    };


    node *head; /**< TODO */

public:
    /**
     * @brief
     *
     */
    CustomLinkedList();
    /**
     * @brief
     *
     * @param value
     */
    void append_last(int value);
    /**
     * @brief
     *
     * @param location
     * @param value
     */
    void insert(int location, int value);
    /**
     * @brief
     *
     * @param location
     */
    void erase(int location);
    /**
     * @brief
     *
     * @param x
     * @param y
     */
    void swap(int x, int y);
};

#endif // CUSTOMLINKEDLIST_H
