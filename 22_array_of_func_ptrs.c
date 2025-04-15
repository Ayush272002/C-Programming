#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }

int main()
{
    int (*operations[2])(int, int) = {add, subtract};

    printf("Addition: %d\n", operations[0](10, 5));
    printf("Subtraction: %d\n", operations[1](10, 5));

    return 0;
}
