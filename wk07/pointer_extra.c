#include <stdio.h>

int main(){

    int n;
    int *p, *q;

    p = &n;
    *p =  5;
    *q = 17;
    q =  p;
    *q =  8;

    printf("n: %d\n", n);
    printf("p: %p -> %d\n", p, *p);
    printf("q: %p -> %d\n", q, *q);
}
