#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str;

    // memory for 20 characters
    str = (char *)malloc(20 * sizeof(char));

    if (str == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    strcpy(str, "Hello, world!");
    printf("String : %s\n", str);

    free(str);
    return 0;
}