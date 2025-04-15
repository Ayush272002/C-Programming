#include <stdio.h>

void greet()
{
    printf("Hello from function pointer!\n");
}

int main()
{
    void (*funcPtr)(); // Declare function pointer
    funcPtr = greet;   // Assign function to pointer

    funcPtr(); // Call the function using pointer

    return 0;
}
