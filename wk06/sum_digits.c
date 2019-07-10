#include <stdio.h>

int main(){ 

    int digit_sum = 0;
    int digit_count = 0;

    // read in characters
    int c = getchar();

    while( c != EOF ){
        if( c >= '0' && c <= '9'){
            digit_sum = digit_sum + ( c - '0' );
            digit_count++;
        }
        c = getchar();
    }

    printf("Input contained %d digits which summed to %d\n",
            digit_count, digit_sum);

    return 0;

}
