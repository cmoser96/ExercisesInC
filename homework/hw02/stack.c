/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int *foo() {
    /**
        This function allocates memory on the stack
        for an array of SIZE integers
        It then sets them equal to 42
        @return The memory address of the array of integers
    */
    int i;
    int array[SIZE];

    //printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
	   array[i] = 42;
    }
    return array;
}

void bar() {
    /**
        This function allocates memory on the stack
        for an array of SIZE integers. It increments
        the value of the integers starting at 0
    */
    int i;
    int array[SIZE];

    //printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
	   array[i] = i;
    }
}

int main()
{
    int i;
    int *array = foo();
    bar();

    for (i=0; i<SIZE; i++) {
	   printf("%d\n", array[i]);
    }

    return 0;
}
