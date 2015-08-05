#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "list.h"

#define N 20

link *new_node(int n)
{
    link *t;
    t = (link *) malloc(sizeof(link));
    if (t != NULL)
    {
        t->item = n;
        t->next = NULL;
        t->prev = NULL;
    }
    return t;
}

link *new_list(void)
{
    int n, i;
    link *head, *new, *t = NULL;
    srand((unsigned) time(NULL));

    for (i = 0; i < N; i++)
    {
        n = rand() % 1000;
        new = new_node(n);
        if (t == NULL)
        {
            t = new;
            head = t;
        }
        else
        {
            t->next = new;
            new->prev->next;
            t = t->next;
        }
    }
    printf("\n");
    return head;
}


void print_list(link *t)
{
    while (t != NULL)
    {
        printf("%d ", t->item);
        t = t->next;
    }
    printf("\n");

}