#include<stdlib.h>

void lost_memory();
int* get_size( int s );


int main(){
    lost_memory();
    int* i = get_size(4);
}

void lost_memory(){
    int* i = malloc(sizeof(int));
}

int* get_size( int s ){
    int* i = malloc(sizeof(int)*s);
    return i;
}
