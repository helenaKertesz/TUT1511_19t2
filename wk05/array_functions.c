// Author: Wed09Sitar and Wed13Kora
// Date created: 03/07/2019
// Some functions playing with arrays
// and a main to test

#include <stdio.h>

void print_array(int n, int array[n]);
int scanf_array(int n, int array[n]);
double average(int n, int array[n]);


int main(){

    int a1[5] = {1, 2, 3, 4, 5};

    print_array(5, a1);
    printf("Average is %lf\n", average(5, a1));

    int a2[6];
    int num_read = scanf_array(6, a2);
    printf("Read in %d values\n", num_read);
    print_array(num_read, a2);
    printf("Average is %lf\n", average(num_read, a2));

    return 0;
}

void print_array(int n, int array[n]){
    printf("[ ");

    int i = 0;
    while( i < n ){
        printf("%d ", array[i]);
        i++;
    }
    
    printf("]\n");
}

int scanf_array(int n, int array[n]){
    
    printf("Please enter %d integers: ", n );
    int i = 0;
    while( i < n && scanf("%d", &array[i]) == 1 ){
        i++;
    }
    return i;
}

double average(int n, int array[n]){
    int i = 0;
    double average = 0;
    while( i < n ){
        average = average + array[i];
        i++;
    }

    average = average / n;
    return average;
}
