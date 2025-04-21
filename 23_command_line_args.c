#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Function call be should be ./a.out <int param 1> <int param 2>\n");
        return 0;
    }

    printf("First parameter %s\n", argv[0]);
    printf("Sum is %d\n", atoi(argv[1]) + atoi(argv[2]));

    return 0;
}