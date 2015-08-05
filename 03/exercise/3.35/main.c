#include <stdio.h>
#include "list.h"

int main(void)
{
    link *head, *t, *d = NULL;
    int i, min;
    head = new_list();
    t = head;
    min = t->item;
    while (t!= NULL)
    {
        if(t->item < min)
            min = t->item;
        t = t->next;
    }
    print_list(head);
    //printf("%d\n",min);
    t = head;
    if( min != first_item(head))
    {
        while(t->next != NULL)
        {
            if(t->next->item == min)
            {
                d = t->next;
                t->next = d ->next;
                d->next = head;
            }
            t = t ->next;
        }
        head = d;
    }
    print_list(head);


    return 0;
}