#include "binarytree.h"

binarytree::binarytree()
{
}

binarytree::BT * binarytree::addNode(int key)
{
    BT *treeNode = new BT;
    treeNode->key = key;
    treeNode->left= NULL;
    treeNode->right= NULL;
}

bool binarytree::findKey(BT *root, int key)
{
    // The following algorithm implements the recursive preorder traversal root,lrft,right
    bool keyFound = false;
    if(root->key == key)
    {
        return true;
    }
    else if(root->left != NULL)
    {
        keyFound = findKey(root->left,key);
    }

    if(!keyFound)
    {
        if(root->right != NULL)
            keyFound = findKey(root->right,key);
    }

    return keyFound;


}
