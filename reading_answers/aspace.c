/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

int global;

void print(char* statement){
	puts(statement);
}

int main ()
{
    int local = 5;
    void *p = malloc(128);
    void *d = malloc(23);
    void *z = malloc(23);

    printf ("Address of main is %p\n", main);
    printf ("Address of global is %p\n", &global);
    printf ("Address of local is %p\n", &local);
    printf ("Address of p is %p\n", p);
    printf ("Address of d is %p\n", d);
    printf ("Address of z is %p\n", z);

    
    return 0;
}
