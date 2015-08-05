#include <stdio.h>
#include "list.h"

int func(link *t)
{
    if (t->item % 2 == 0)
        return 0;
    return 1;
}

/*link *remove_items(int (*f)(link *), link *t)
{
    link *head = t;

    while (t != NULL)
    {
        if (!(f(head)))
            head = t->next;
        else if (!(f(t)))
            delete_node(head, t);
        t = t->next;
    }
    return head;
}*/

/*link *remove_items(int (*f)(link *), link *t)
{
    link * new, *head, *l = NULL;

    while (t != NULL)
    {
        if (f(t)) if (l != NULL)
        {
            new = new_node(t->item);
            l->next = new;
            l = new;
        }
        else
        {
            new = new_node(t->item);
            head = new;
            l = new;
        }
        t = t->next;
    }
    return head;
}*/

int main(void)
{
    link *t;

    t = new_list();
    print_list(t);

    return 0;
}