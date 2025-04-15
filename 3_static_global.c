#include <stdio.h>

int x = 0;
int add(int a, int b)
{
    static int calls = 0;
    int num = 0;
    calls++;
    num++;
    printf("inside add() called static variable value -> %d\n", calls);
    printf("inside add() called num variable value -> %d\n", num);
    x++;
    return a + b;
}

int main(void)
{
    printf("%d\n", add(2, 3));
    printf("%d\n", add(4, 5));
    printf("%d\n", add(6, 7));

    printf("Value of x is %d\n", x);
    return 0;
}
