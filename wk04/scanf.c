// Author: Helena Kertesz
// Date created: 25/06/2019
// Example for using scanf to read in
// many items one by one

#include <stdio.h>

int main(void){

    int read_in;

    // num_read is the number of things
    // sucessfully read in by scanf,
    // so this line both 
    int num_read = scanf("%d", &read_in);

    while( num_read == 1 ){

        // print out num of things the previous
        // scanf read in, as well as printing
        // the value that was read in
        printf("num_read: %d\n", num_read);
        printf("read_in : %d\n", read_in);

        // do a scanf to get the next value
        num_read = scanf("%d", &read_in);
    }
  
    // this shows the return value in the case
    // that the while loop was exited
    printf("num_read: %d\n", num_read);
    // this will be 0 (nothing read in) if
    // an incorrect value was given (ie "qwerty")
    // and -1 if EOF (end of file) was given
    // by tryping CTRL-D

    return 0;

}






/*
while( scanf("%d", &read ) == 1 ){
    printf("read: %d\n", read );
}
*/






    
    
    
    
