#include <stdio.h>
#include <stdlib.h>

struct overall {
    struct node *start;
    struct node *end;
};

struct node {
    int data;
    struct node *next;
};

struct node *new_node(int data);
void insert_at_front(struct overall *o, int data);
void insert_before_end(struct overall *o, int data);
struct overall* new_list();
void print_list (struct overall *o);

int main(){
    struct overall* my_list = new_list();

    print_list(my_list);
    insert_at_front(my_list, 1);
    print_list(my_list);

    insert_at_front(my_list, 2);
    print_list(my_list);

    insert_before_end(my_list, 3);
    print_list(my_list);
}

// Create a node
struct node *new_node(int data) {
    struct node* node = malloc(sizeof(struct node));
    if( node == NULL){
        fprintf(stderr, "Malloc failed\n");
        exit(1);
    }
    node -> data = data;
    node -> next = NULL;
    return node;
}

// Create and add a node at the start of the list
void insert_at_front(struct overall *o, int data) {
    struct node* node = new_node(data);
    node -> next = o -> start;
    o -> start = node;

    if( o -> end == NULL){
        o -> end = node;
    }
}

// Create and add a node before the last element
// if the list is empty simply insert
void insert_before_end(struct overall *o, int data) {
    struct node* node = new_node(data);

    if( o -> start == NULL ){
        o -> start = node;
        o -> end = node;
    } else {

        struct node* curr = o -> start;
        while( curr -> next != o -> end ){
            curr = curr -> next;
        }

        curr -> next = node;
        node -> next = o -> end;
    }
}

struct overall* new_list(){
    struct overall* new_list = malloc(sizeof(struct overall));
    if( new_list == NULL){
        fprintf(stderr, "Malloc failed\n");
        exit(1);
    }
    new_list -> start = NULL;
    new_list -> end = NULL;
    return new_list;
}

void print_list (struct overall *o){
    struct node* curr = o -> start;
    while( curr != NULL ){
        printf("%d -> ", curr -> data);
        curr = curr -> next;
    }
    printf("X\n");
}
