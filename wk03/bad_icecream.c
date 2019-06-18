#include<stdio.h>
// Author: Helena
// Date created: 12/06/2019
int main(void){
int n;
int s;
    printf("How many scoops? ");
    scanf("%d", &n );
    printf("How many dollars does each scoop cost? ");
    scanf("%d", &s );
    if( 10-n*s > 0 ){
        printf("You have enough money!\n");
    } if(10 - n*s < 0) {
    printf("Oh no, you don't have enough money :(\n");
}
return 0;
}
