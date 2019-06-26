// Author: wed09-sitar and wed13-kora
// Date created: 19/06/2019
// Counts up to a given number

#include <stdio.h>

int main(void) {

    int i = 0;
    int finish;

    printf("Enter finish: ");
    scanf("%d", &finish );

    while( i <= finish ){
        printf("%d\n", i );
        i++;
    }
    
    return 0;
}
