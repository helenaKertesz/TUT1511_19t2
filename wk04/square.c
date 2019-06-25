#include <stdio.h>

int main(void) {
    int number;
    int row, col;

    // Obtain input
    printf("Enter size: ");
    scanf("%d", &number);

    row = 1;
    while (row <= number) {
        col = 1;
        while (col <= number) {
            if( row + col <= number  ){
                printf("-");
            } else {
                printf("*");
            }
            col = col + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}
