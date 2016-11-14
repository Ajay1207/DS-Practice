#ifndef PLAYGROUND_H
#define PLAYGROUND_H

/**
 * This class implements some of the common
 * programming questions using DS
 *
 */
#include <stdio.h>
#include<cstdlib>
#include<iostream>
#include<stdexcept>
#include <limits.h>
#include "customstack.h"
using namespace std;

class playground
{
    CustomStack temp_stack;
    CustomStack::stackNode *root=NULL;
public:
    playground();
    void printNGE(int *in_arr, int size_of_array);
    void reverseStack(CustomStack *s1,
                      CustomStack::stackNode **root1,
                      CustomStack *s2,
                      CustomStack::stackNode **root2);
};

#endif // PLAYGROUND_H
