#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n = 5;

    arr = (int *)malloc(n * sizeof(int)); // allocate memory for 5 integers

    if (arr == NULL)
    {
        printf("Memory not available\n");
        return 1;
    }

    printf("Addresses of the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Address of arr[%d] = %p\n", i, (void *)&arr[i]);
    }

    // assign values
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    // print
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");

    free(arr);
    return 0;
}