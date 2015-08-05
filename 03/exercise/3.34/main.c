#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void)
{
    link *head, *t;
    link *d = NULL;
    int max, not_last = 1;

    head = new_list();
    print_list(head);
    //printf("%d\n", last_item(head));
    //printf("%d\n", first_item(head));
    t = head;
    max = t->item;

    while (t != NULL)
    {
        if (t->item > max)
            max = t->item;
        t = t->next;
    }
    printf("%d\n", max);
    t = head;

    if (max != last_item(head))
    {
        while (t->next != NULL)
        {
            if (t->next->item == max)
            {
                d = t->next;
                t->next = d->next;
                not_last = 0;
                d->next = NULL;
            }
            t = t->next;
        }
        t->next = d;
    }
    print_list(head);

    return 0;
}
