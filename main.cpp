#include <QCoreApplication>
#include "customlinkedlist.h"
#include"customstack.h"
#include"playground.h"

int main(int argc, char *argv[])
{
    //    CustomLinkedList my_list;
    //    my_list.append_last(2);
    //    my_list.append_last(0);
    //    my_list.append_last(3);
    //    my_list.append_last(8);
    //    my_list.insert(1,6);

    //    my_list.swap(0,8);
    //    CustomStack my_stack;
    //    CustomStack::stackNode *root =NULL;

    //    my_stack.push(&root,1);
    //    my_stack.push(&root,2);
    //    my_stack.push(&root,3);
    //    my_stack.push(&root,7);
    //    int val = my_stack.pop(&root);

    //    int arr[10] = {-1,0,5,4,6,2,8,0,17,0};
    //    int size = sizeof(arr)/sizeof(arr[0]);
    //    playground algo;
    //    algo.printNGE(arr,size);
    CustomStack *my_stack,*s2;
    CustomStack::stackNode *root =NULL;
    CustomStack::stackNode *root2 =NULL;

    my_stack->push(&root,1);
    my_stack->push(&root,2);
    my_stack->push(&root,3);
    my_stack->push(&root,7);

    playground algo;
    algo.reverseStack(my_stack,&root,s2,&root2);

    return 0;
}
