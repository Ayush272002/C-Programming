#include <stdio.h>

int multiply(int a, int b)
{
    return a * b;
}

void performOperation(int x, int y, int (*op)(int, int))
{
    printf("Result: %d\n", op(x, y));
}

int main()
{
    performOperation(4, 5, multiply);
    return 0;
}
