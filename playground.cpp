#include "playground.h"


playground::playground()
{
}

void playground::printNGE(int *in_arr, int size_of_array)
{
    int next, element;


    temp_stack.push(&root,in_arr[0]);

    for(int itr=1; itr< size_of_array; itr++)
    {
        next = in_arr[itr];
        element = temp_stack.pop(&root);

        while(element < next)
        {
            cout<<element<<"\t"<<next<<endl;
            if(temp_stack.isEmpty(root))
                break;
            else
                element = temp_stack.pop(&root);

        }
        if(element >= next)
            temp_stack.push(&root,element);
        temp_stack.push(&root,next);

    }
    while(!temp_stack.isEmpty(root))
    {
        element = temp_stack.pop(&root);
        cout<<element<<"\t"<<"-1"<<endl;
    }

}

void playground::reverseStack(CustomStack *s1,
                              CustomStack::stackNode **root1,
                              CustomStack *s2,
                              CustomStack::stackNode **root2)
{
    if(!s1->isEmpty(*root1))
    {
        int temp_elem = s1->pop(root1);
        s2->push(root2,temp_elem);
        reverseStack(s1,root1,s2,root2);
    }
}
