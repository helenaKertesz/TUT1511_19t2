#include <stdio.h>
#include "queue.h"

int main(){
    printf("======= QUEUE =======\n");

    struct queue* my_queue = new_queue();
    push( my_queue, 1);
    push( my_queue, 2);
    push( my_queue, 3);

    int num;
    num = pop( my_queue );
    printf("Popped: %d\n", num);
    num = pop( my_queue );
    printf("Popped: %d\n", num);
    num = pop( my_queue );
    printf("Popped: %d\n", num);

    /*printf("======= STACK =======\n");

    struct stack* my_stack = new_stack();
    push( my_stack, 1);
    push( my_stack, 2);
    push( my_stack, 3);

    int num;
    num = pop( my_stack );
    printf("Popped: %d\n", num);
    num = pop( my_stack );
    printf("Popped: %d\n", num);
    num = pop( my_stack );
    printf("Popped: %d\n", num);

    */

}
