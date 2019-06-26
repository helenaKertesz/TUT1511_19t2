// Author: wed09-sitar and wed13-kora
// Date created: 19/06/2019
// Converts cm to feet

#include <stdio.h>

#define CM_IN_FOOT 30.48

int main(void) {

    int heightCm, heightFeet;

    printf("Please enter your height in centimeters: ");
    scanf("%d", &heightCm);

    heightFeet = heightCm / CM_IN_FOOT;

    printf("You are %d feet tall\n", heightFeet );
    
    return 0;
}
