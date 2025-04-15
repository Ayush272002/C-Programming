#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*operation)(int, int); // Function pointer declaration
    operation = add;            // Assign function

    int result = operation(5, 3); // Call the function via pointer
    printf("Result: %d\n", result);

    return 0;
}
