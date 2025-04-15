#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a; // store value pointed to by a
    *a = *b;       // set value of a to value of b
    *b = temp;     // set value of b to old value of a
}

int main()
{
    int x = 5, y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y); // pass addresses

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
