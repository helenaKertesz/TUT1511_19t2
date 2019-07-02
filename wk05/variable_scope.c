#include <stdio.h>

void myFunct(int c, int arr[] );

int main(){

    int a = 4;
    int b[3] = {1, 2, 3};

    printf("1. a = %d\n", a);
    printf("2. b = [%d, %d , %d]\n", b[0], b[1], b[2]);

    myFunct(a, b);
    
    printf("8. a = %d\n", a);
    printf("9. b = [%d, %d , %d]\n", b[0], b[1], b[2]);
    
    return 0;
}

void myFunct(int c, int arr[] ){
    
    printf("3. a = %d\n", a);
    printf("4. c = %d\n", c);
    printf("5. arr = [%d, %d , %d]\n", arr[0], arr[1], arr[2]);

    c = 7;
    arr[1] = 4;
    
    printf("6. c = %d\n", c);
    printf("7. arr = [%d, %d , %d]\n", arr[0], arr[1], arr[2]);

}
