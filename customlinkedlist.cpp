#include "customlinkedlist.h"

CustomLinkedList::CustomLinkedList()
{
    head->data = 0;
    head->next = NULL;

}

void CustomLinkedList::insert(int location, int value)
{
    node *new_node = (struct node*) malloc(sizeof(struct node));

    node *last = (struct node*) malloc(sizeof(struct node));

    *last = *this->head;

    if(this->head->next == NULL)
    {
        new_node->data = value;
        new_node->next = NULL;
        this->head->next = new_node;
    }
    else
    {

        int counter = 1;
        while(last->next != NULL)
        {

            last = last->next;

            if(counter == location)
            {
                break;
            }
            else if(last != head)
                counter++;

        }
        new_node->data = value;
        new_node->next = last->next;
        last->next = new_node;

    }

}

void CustomLinkedList::append_last(int value)
{
    node *new_node = (struct node*) malloc(sizeof(struct node));

    node *last = (struct node*) malloc(sizeof(struct node));
    *last = *this->head;
    if(this->head->next == NULL)
    {
        new_node->data = value;
        new_node->next = NULL;
        this->head->next = new_node;
    }
    else
    {

        while(last->next != NULL)
        {

            last = last->next;

        }
        new_node->data = value;
        new_node->next = NULL;
        last->next = new_node;

    }

}



void CustomLinkedList::erase(int location)
{

    node *last = (struct node*) malloc(sizeof(struct node));
    node *previous = (struct node*) malloc(sizeof(struct node));
    *last = *this->head;

    if(this->head->next == NULL)
    {
        cout<<"list is empty"<<std::endl;
        return;
    }
    else if(location < 0)
    {
        throw invalid_argument("Invalid argument \n");

    }
    else
    {
        int counter = 0;
        bool foundElement = false;
        while(last->next != NULL)
        {
            previous = last;
            last = last->next;
            if(counter == location)
            {
                foundElement = true;
                break;

            }counter++;
        }
        if(!foundElement)
        {
            throw invalid_argument("Index out of range");
        }
        else if(counter > 0 )
        {
            previous->next = last->next;
            free(last);
        }
        else
        {
            head->next = NULL;
            free(previous);
            free(last);
        }

    }


}
