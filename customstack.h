#ifndef CUSTOMSTACK_H
#define CUSTOMSTACK_H

#include <stdio.h>
#include<cstdlib>
#include<iostream>
#include<stdexcept>
#include <limits.h>
using namespace std;
/**
 * @brief
 *
 */
class CustomStack
{


public:
    /**
     * @brief
     *
     */
    CustomStack();
    /**
     * @brief
     *
     */
    struct stackNode
    {
        int data; /**< TODO */
        stackNode *next; /**< TODO */
    };
    /**
     * @brief
     *
     * @param root
     * @param data
     */
    void push(stackNode **root, int data);
    /**
     * @brief
     *
     * @param root
     * @return int
     */
    int pop(stackNode **root);
    /**
     * @brief
     *
     */
    void printItems();
    bool isEmpty(stackNode *node);
private:
    /**
     * @brief
     *
     * @param data
     * @return stackNode
     */
    stackNode *newNode(int data);
    /**
     * @brief
     *
     * @param node
     * @return bool
     */



};

#endif // CUSTOMSTACK_H
