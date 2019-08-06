#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "list.h"

void print( struct node* list ){
    struct node* curr = list;
    while( curr != NULL){
        printf("%d -> ", curr->data );
        curr = curr->next;
    }
    printf("X\n");
}


struct node* new_node( int value ){
   struct node* new = malloc(sizeof(struct node));
   assert( new != NULL );

   new->next = NULL;
   new->data = value;

   return new;
}
