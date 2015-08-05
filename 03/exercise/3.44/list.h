#ifndef LIST_H
#define LIST_H

typedef struct node link;
struct node
{
    int item;
    link *next;
    link *prev;
};

link *new_node(int);

link *new_list(void);

void print_list(link *);

#endif
