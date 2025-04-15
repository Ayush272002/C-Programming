#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter max length of your name : ");
    scanf("%d", &size); // scanf needs a memory address

    // allocating memory (+1 for null char)
    char *name = (char *)malloc((size + 1) * sizeof(char));

    if (name == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    getchar(); // consume leftover line
    printf("Enter your name : ");
    fgets(name, size + 1, stdin);

    printf("Hello, %s\n", name);

    for (int i = 0; i <= size; i++)
    {
        if (name[i] == '\0')
            printf("\\0"); // print visible representation
        else
            printf("%c", name[i]);
    }

    printf("\n");

    free(name);
    return 0;
}