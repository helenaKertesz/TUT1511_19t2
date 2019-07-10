#include <stdio.h>

int main( int argc, char* argv[] ){

    int arg_count = 1; // start at 2nd argument
    int char_count = 0;

    while( arg_count < argc ){
        // if I wanted to print out the entire argument
        // printf("%s\n", argv[arg_count]);

        char_count = 0;
        while( argv[arg_count][char_count] != '\0'){
            if(argv[arg_count][char_count] >= '0' &&
                    argv[arg_count][char_count] <= '9'){

                printf("%c\n", argv[arg_count][char_count]);

            }
            char_count++;
        }

        arg_count++;
    }

}
