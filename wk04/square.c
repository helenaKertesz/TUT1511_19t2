// Print out a square of *'s
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
            
            printf("*");
            col = col + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}
