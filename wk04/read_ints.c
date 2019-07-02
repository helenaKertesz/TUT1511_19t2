// Author: Helena Kertesz
// Date created: 26/06/2019
// Determine how many ints a user has entered

#include <stdio.h>

int main(){

    int read;
    int num_ints = 0;

    while( scanf( "%d", &read ) == 1 ){
        num_ints++;
    }

    printf("You entered %d integers\n", num_ints);

    return 0;
}
