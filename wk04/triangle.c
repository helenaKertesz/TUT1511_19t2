// Author: Helena Kertesz
// Date: 26/06/2019
// Print out a triangle of *'s
// of a given size

#include <stdio.h>

int main(void) {
    int number;
    int row, col;

    // Obtain input
    printf("Enter size: ");
    scanf("%d", &number);
    
    row = 0;
    while (row < number) {
        col = 0;
        while (col < number) {
           
            // nearly all 2D shapes can be created
            // by changing this if statement
            if( col + row < number  ){
                printf("#");
            } else {
                printf("-");
            }

            col = col + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}
