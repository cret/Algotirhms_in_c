#ifndef LIST_H
#define LIST_H

typedef struct node link;
struct node
{
    int item;
    link *next;
};

link *new_node(int);

link *new_list(void);

void print_list(link *);

int last_item(link *);

int first_item(link *);

link* add_next(int, link *);

link* concat_list(link *, link *);

#endif
