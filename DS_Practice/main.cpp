#include<mylinkedlist.h>

int main(int argc, char *argv[])
{

    MyLinkedList list;

    for(int ctr = 1; ctr < 34; ctr++)
        list.insert(ctr);

    for(int ctr = 1; ctr < list.Size(); ctr += 3)
        list.removeat(ctr);
    list.print();   //function to print

    cout<<"Size: "<<list.Size()<<endl;
    return 0;

}
