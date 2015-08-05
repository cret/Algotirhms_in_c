#include <stdio.h>
#include "list.h"

int main(void)
{
    link *l, *t;
    l = new_list();
    print_list(l);
    t = copy_list(l);
    print_list(t);
    return 0;
}