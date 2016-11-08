#include <QCoreApplication>
#include "customlinkedlist.h"
#include"customstack.h"
int main(int argc, char *argv[])
{
    //    CustomLinkedList my_list;
    //    my_list.append_last(2);
    //    my_list.append_last(0);
    //    my_list.append_last(3);
    //    my_list.append_last(8);
    //    my_list.insert(1,6);

    //    my_list.swap(0,8);
    CustomStack my_stack;
    CustomStack::stackNode *root =NULL;

    my_stack.push(&root,1);
    my_stack.push(&root,2);
    my_stack.push(&root,3);
    my_stack.push(&root,7);
    int val = my_stack.pop(&root);
    return 0;
}
