#include <stdio.h>

int main()
{
    int c, nl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;
    }

    printf("\n%s\t%d\n", "num of lines", nl + 1);
    return 0;
}