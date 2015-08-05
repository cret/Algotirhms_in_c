#include <stdio.h>
#include "list.h"

int main(void)
{
    link *l, *t, *u;

    l = new_list();
    t = l;
    u = l;
    while(u->next != NULL)
    {
        u = u->next;
    }
    print_list(l);
    exchage_node(t, u);
    print_list(l);
    return 0;
}