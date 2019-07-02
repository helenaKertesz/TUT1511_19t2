// Author: Helena Kertesz
// Date created: 25/06/2019
// Example for using scanf to read in many
// items one by one without having a 
// separate value for the num items read in

#include <stdio.h>

int main(void){

    int read_in;

    // this while condition both conducts a scanf
    // and checks that the return value is 1
    while( scanf("%d", &read_in ) == 1 ){
        printf("read: %d\n", read_in );
    }

    return 0;

}
