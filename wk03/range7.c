// Author: wed09-sitar and wed13-kora
// Date created: 19/06/2019
// Counts from a given start up to a given end number

#include <stdio.h>

int main(void) {

    int start, finish;

    printf("Enter start: ");
    scanf("%d", &start );
    printf("Enter finish: ");
    scanf("%d", &finish );

    int num = start;

    while( num <= finish ){
        if( num % 7 == 0 ){
            printf("%d\n", num );
        }
        num++;
    }
    
    return 0;
}
