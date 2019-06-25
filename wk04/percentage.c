//COMP1511 Lab03 "Percentage"
// Nelson Lee z5213736 & Anthony Carbone z5260477
// 19th June 2019

/* This is a program which calculates the marks that a student scored in an
   exam as a percentage
 */

#include <stdio.h>


int main(void) {

int marks;
    double max_marks, score;
    printf("Enter the total number of marks in the exam: ");
    scanf("%lf", &max_marks);
    printf("Enter the number of marks the student was awarded: ");
    scanf("%d", &marks);

    score = marks / max_marks * 100;
    printf("The student scored %.0lf%% in this exam.\n", score);
    
    return 0;
}
