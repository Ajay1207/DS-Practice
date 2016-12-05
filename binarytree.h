#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "cstdlib"
#include "limits.h"
class binarytree
{




public:
    struct BT
    {
        int key;
        BT *left,*right;
    };
    BT *addNode(int key);
    //A recursive function to find a given key
    bool findKey(BT* root,int key);
    binarytree();
};

#endif // BINARYTREE_H
