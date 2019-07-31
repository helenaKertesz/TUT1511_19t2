// implements functions in list.h
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "list.h"

// ======= W10 Tut Problems ========
// returns a copy of the linked list
struct node *copy(struct node *head) {
    // replace this!
    if( head == NULL ){
        return NULL;
    }
    
    
    struct node* old_curr = head;
    struct node* new_curr = head;
    struct node* new_head = NULL;
    while( old_curr != NULL ){
        // make node
        struct node* new_node = malloc(sizeof(struct node));
        new_node -> data = old_curr -> data;

        // add to list
        if( new_head == NULL ){
            new_head = new_node;
        } else {
            new_curr -> next = new_node;
        }

        // itterate
        new_curr = new_node;
        old_curr = old_curr -> next;
    }

    return new_head;
}

// returns 1 if the two lists are identical, otherwise returns 0
int identical(struct node *head1, struct node *head2) {
    // replace this!
    struct node* curr1 = head1;
    struct node* curr2 = head2;
    while( curr1 != NULL && curr2 != NULL ){
        if( curr1->data != curr2-> data){
            return 0;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    if( curr1 != NULL || curr2 != NULL ){
        return 0;
    }

    return 1;
}

// given two lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in both set1 and set2
struct node *set_intersection(struct node *set1, struct node *set2) {

    struct node* head = NULL;
    struct node* new_curr = NULL;

    while( set1 != NULL && set2 != NULL ){

        if( set1->data == set2->data ){
            struct node* new_node = malloc(sizeof(struct node));
            new_node->data = set1->data;
            new_node ->next= NULL;

            if( head == NULL ){
                head = new_node;
            } else {
                new_curr-> next = new_node;
            }
            new_curr = new_node;

            set1 = set1->next;
            set2 = set2->next;

        } else if( set1->data > set2-> data) {
            set2 = set2 -> next;
        } else {
            set1 = set1->next;
        }
    }
    return head;    // replace this
}

// given two linked lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in either set1 or set2
// no duplicates (only include them once)
struct node *set_union(struct node *set1, struct node *set2) {

    struct node* head = NULL;
    struct node* new_curr = NULL;

    while( set1 != NULL || set2 != NULL ){
        
        struct node* new_node = malloc(sizeof(struct node));
        new_node ->next = NULL;

        if( set1 != NULL && set2 != NULL && set1->data == set2->data ){
            new_node->data = set1->data;

            set1 = set1->next;
            set2 = set2->next;

        } else if( set1 == NULL || (set2 != NULL && set1->data > set2-> data)) {
            new_node -> data = set2->data;
            set2 = set2 -> next;
        } else {
            new_node -> data = set1->data;
            set1 = set1->next;
        }
        
        
        if( head == NULL ){
            head = new_node;
        } else {
            new_curr-> next = new_node;
        }
        new_curr = new_node;

    }
    return head;    // replace this

}

// =================================

// given an array of integer values for data items
// returns the head of a linked list with these values
// in the order as they appear in the array
// size gives the size of the array
struct node *create_list(int values[], int size) {
    int i = 0;

    if (size <= 0) {
        // empty linked list (or invalid size)
        return NULL;
    }

    struct node *head = NULL;   // head of the linked list
    struct node *tmp = NULL;    // temporary item we're working with
    struct node *curr = NULL;   // current node we're looking at in the linked list

    while (i < size) {
        tmp = create_node(values[i]);

        // link this node onto our list
        if (head == NULL) {
            // this is the first node in the list
            head = tmp;
            curr = head;
        } else {
            // this is not the first node in the list
            // add it to the end, i.e. after curr
            curr->next = tmp;

            // reset curr to point at the new last node
            curr = tmp;
        }
        i = i + 1;
    }

    return head;
}

// creates a struct node with the given data value
// returns a pointer to this node
struct node *create_node(int dat) {
    struct node *new = malloc(sizeof(struct node));
    assert(new != NULL);
    new->data = dat;
    new->next = NULL;

    return new;
}

// prints out the list given the head of a list
void print_list(struct node *head) {
    struct node *curr;
    curr = head;

    while (curr != NULL) {
        printf("[ %d ]-->", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

}

// frees all the elements in a linked list
void free_list(struct node *head) {
    if (head == NULL) {
        return;
    }
    free_list(head->next);
    free(head);
}

// return the number of items in the linked list
int num_items(struct node *head) {
    struct node *curr = head;
    int count = 0;

    while (curr != NULL) {
        count = count + 1;
        curr = curr->next;
    }

    return count;
}
