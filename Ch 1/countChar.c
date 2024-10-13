#include <stdio.h>

int main()
{
    long num = 0;

    while (getchar() != EOF)
    {
        ++num;
    }

    printf("\n%s\t%ld\n", "number of char", num);
    return 0;
}