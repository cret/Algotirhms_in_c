#include <stdio.h>
#include "list.h"

int main(void)
{
    link *head, *odd = NULL, *even = NULL;
    head = new_list();

    print_list(head);

    while (head != NULL)
    {
        odd = add_next(head->item,odd);
        head = head ->next;
        even = add_next(head->item, even);
        head = head->next;
    }

    head =concat_list(odd, even);
    print_list(head);

    return 0;
}