#include "customlinkedlist.h"

/**
 * A custom linked list
 *
 */
CustomLinkedList::CustomLinkedList()
{
    head->data = NULL;
    head->next = NULL;

}

/**
 * @brief
 *
 * @param location
 * @param value
 */
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

/**
 * @brief
 *
 * @param value
 */
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



/**
 * @brief
 *
 * @param location
 */
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

/**
 * @brief
 *
 * @param x
 * @param y
 */
void CustomLinkedList::swap(int x, int y)
{
    node *temp,*input_node1,*input_node2,*prev_node1,*prev_node2;

    temp=this->head;

    //Finding first node position
    bool foundData1 = false;
    bool foundData2 = false;
    if(this->head->data== x || this->head->data==y)
    {
        throw invalid_argument("Cannot replace head");
    }
    while(temp->next !=NULL)
    {

        if(temp->data == x )
        {
            foundData1 = true;
            break;
        }
        prev_node1 = temp;
        temp = temp->next;

    }
    if(temp->next == NULL && temp->data == x)
    {
        foundData1=true;
    }
    if(!foundData1)
        throw invalid_argument("Data not found");
    input_node1 = temp;
    //find second free(temp);
    temp=this->head;
    while(temp->next !=NULL)
    {

        if(temp->data == y )
        {
            foundData2=true;
            break;
        }

        prev_node2 = temp;
        temp = temp->next;

    }
    if(temp->next == NULL && temp->data == y)
    {
        foundData2=true;
    }
    if(!foundData2)
        throw invalid_argument("Data not found");
    input_node2 = temp;
    //swap nodes
    node *next_temp1, *next_temp2;

    next_temp1 = input_node1->next;
    next_temp2 = input_node2->next;
    prev_node1->next = input_node2;
    input_node2->next = input_node1->next;
    next_temp1->next = input_node1;
    input_node1->next = next_temp2;

}
