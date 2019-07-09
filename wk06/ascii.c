#include <stdio.h>

int main(){

    int char1 = 'h';
    int char2 = 'j';

    printf("%c\n", char1);
    printf("%d\n", char1);

    printf("%d\n", char2 - char1);

    int char3 = '4';

    if( char3 == 4 ){
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    if( ('a' - 'A') == ('h' - 'H') ){
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }


    return 0;
}
