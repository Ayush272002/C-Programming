#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

void main()
{
    int a = 2;
    int b = 3;
    printf("%d\n", add(a, b));
}