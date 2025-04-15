#include <stdio.h>

int main()
{
    int x = 42;
    int *p = &x;
    int **pp = &p;

    printf("x      = %d\n", x);    // prints 42
    printf("*p     = %d\n", *p);   // dereference once => value of x
    printf("**pp   = %d\n", **pp); // dereference twice => still value of x

    printf("&x     = %p\n", (void *)&x);  // address of x
    printf("p      = %p\n", (void *)p);   // p stores address of x
    printf("*pp    = %p\n", (void *)*pp); // dereference pp => p => address of x
    printf("pp     = %p\n", (void *)pp);  // address of p

    **pp = 99;
    printf("x      = %d\n", x);

    return 0;
}
