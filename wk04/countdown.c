
/*  COMP1511 Lab 2 Exercise - Three or Five

Author:
Anthony Carbone (z5260477@unsw.edu.au)
Nelson Lee (z5213736@unsw.edu.au)

Written: 19/06/19
 */

#include <stdio.h>

int main(void) {

    int number, counter = 3;

    printf("Enter number: ");
    scanf("%d", &number);

    while (counter < number) {
        if (counter % 3 == 0 || counter % 5 == 0) {
            printf("%d\n", counter);
        }

        counter++;
    }

    return 0;
}

