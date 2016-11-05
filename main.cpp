#include <QCoreApplication>
#include "customlinkedlist.h"
int main(int argc, char *argv[])
{
    CustomLinkedList my_list;
    my_list.append_last(2);
    my_list.append_last(3);
    my_list.append_last(8);
    my_list.insert(1,6);
    my_list.erase(3);
    return 0;
}
