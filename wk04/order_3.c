// Ryder Jacka
// z5230735
// On 24/06/2019
// A small program that takes three integers, orders them from 
// smallest to largest, and prints them in order

#include <stdio.h>

int main(void) {
    
    int num1, num2, num3;
    int first, second, third;
    
    // Prompting user to enter three integers and then 
    // scanning their input into the 3 number variables
    
    printf("Enter integer: ");
    scanf("%d", &num1);
    
    printf("Enter integer: ");
    scanf("%d", &num2);
    
    printf("Enter integer: ");
    scanf("%d", &num3);
    
    // If statements for all the cases that can occur
    
    if (num1 <= num2 && num2 <= num3) {
        first = num1;
        second = num2;
        third = num3;
    } else if (num1 <= num3 && num3 <= num2) {
        first = num1;
        second = num3;
        third = num2;
    } else if (num2 <= num3 && num3 <= num1) {
        first = num2;
        second = num3;
        third = num1;
    } else if (num2 <= num1 && num1 <= num3) {
        first = num2;
        second = num1;
        third = num3;
    } else if (num3 <= num1 && num1 <= num2) {
        first = num3;
        second = num1;
        third = num2;
    } else {
        first = num3;
        second = num2;
        third = num1;
    }
    
    // Integers in correct order are printed
    
    printf("The integers in order are: %d %d %d\n", first, second, 
third);    
    
    return 0;
}

