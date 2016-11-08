#include "customstack.h"

CustomStack::CustomStack()
{
}

CustomStack::stackNode *CustomStack::newNode(int data)
{
    stackNode *new_node = new stackNode();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

bool CustomStack::isEmpty(stackNode *node)
{
    if(!node)
        return true;
    else
        return false;
}

void CustomStack::push(stackNode **root, int data)
{
    stackNode *inNode = newNode(data);
    inNode->next = *root;
    *root = inNode;
}

int CustomStack::pop(stackNode **root)
{
    if(!isEmpty(*root))
    {
        stackNode *temp = *root;
        *root = (*root)->next;
        int data = temp->data;
        free(temp);
        return data;

    }
    else
    {
        return INT_MIN;
    }

}
