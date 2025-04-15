#include <stdio.h>

int main(void)
{
    int x = 10;
    int *ptr; // Declare a pointer to int
    ptr = &x; // Store address of x in ptr

    // print some stuff
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value stored in ptr (address of x): %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr); // Dereferencing

    // Modify x using the pointer
    *ptr = 20;
    printf("New value of x after modification through pointer: %d\n", x);

    return 0;
}
