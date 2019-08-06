#include "list.h"

struct queue {
    struct node* start;
    struct node* end;
};

struct queue* new_queue();
void push( struct queue* my_queue, int value );
int  pop( struct queue* my_queue);
