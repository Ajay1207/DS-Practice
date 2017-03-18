#include "mylinkedlist.h"

MyLinkedList::MyLinkedList()
{

    root = new node();
    leaf = new node();
    size = 0;

}

MyLinkedList::~MyLinkedList()
{
}



//create alink list

MyLinkedList::node *MyLinkedList::createNewNode(int data)
{
    MyLinkedList::node *newNode = new MyLinkedList::node();// create a constructor with same name as class has
    newNode->data = data;//assign datato new node
    newNode->next = NULL;//assign null to link

    return newNode;
}
//

int MyLinkedList::Size()
{
    return size;
}

//

void MyLinkedList::insert(int data)
{

    node *newNode = createNewNode(data);
    if(root->next == NULL)
    {
        root->next = newNode;
        leaf = newNode;
    }
    else
    {
        leaf->next = newNode;
        leaf = newNode;
    }
    size++;


}

void MyLinkedList::removeat(int location)
{
    node *temp  = root->next;
    node *prev = root;
    int locationctr = 0;
    while(temp->next !=NULL && locationctr != location)
    {
        prev = temp;
        temp = temp->next;
        locationctr++;

    }

    if(location > locationctr)
    {
        throw exception();
    }
    else
    {
        prev->next = temp->next;
        delete temp;
        size--;
    }
}

void MyLinkedList::print()
{
    node * temp = root->next;
    while (temp->next != NULL) {

        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<temp->data<<endl;

}

