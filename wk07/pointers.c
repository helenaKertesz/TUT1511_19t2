#include <stdio.h>

void myFunct(int var1, int* var2 );

int main(){

    int a = 7;
    int b = 5;

    printf("a at    %p with value %d\n", &a, a);
    printf("b at    %p with value %d\n\n", &b, b);

    myFunct( a , &b );
    
    printf("a at    %p with value %d\n", &a, a);
    printf("b at    %p with value %d\n", &b, b);

}   


void myFunct(int var1, int* var2 ){
    printf("var1 at %p with value %d\n", &var1,  var1);
    printf("var2 at %p with value %d\n\n",  var2, *var2);

    var1 = 10;
    *var2 = 10;
}
