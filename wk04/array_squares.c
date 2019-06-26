// Author: wed09-sitar and wed13-kora
// Date created: 26/06/2019
// Create an array where each element is
// the square of the index

#include <stdio.h>

int main(){

    // create array
    int squares[15];

    // fill array
    int i = 0;
    while( i < 15 ){
        squares[i] = i*i;
        i++;
    }
   
    // print array
    i = 0;
    while( i < 15 ){
        printf("%d\n", squares[i]);
        i++;
    }

    return 0;
}
