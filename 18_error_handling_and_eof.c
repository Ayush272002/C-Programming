#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch); // Print characters one by one
    }

    if (feof(file))
    {
        printf("\nEnd of file reached.\n");
    }

    fclose(file);
    return 0;
}
