// Author: Helena Kertesz
// Date created: 26/06/2019
// Use a function to add two numbers

#include <stdio.h>

// forward declare the function
int add( int a, int b );

int main(void){
    int in1, in2;
    printf("Input two integers to add: ");
    scanf("%d %d", &in1, &in2 );

    int result = add(in1, in2);
    
    printf("%d + %d = %d\n", in1, in2, result);

    return 0;
}


// This function adds two integers
// and returns the result
int add( int a, int b ){
    return a + b;
}
