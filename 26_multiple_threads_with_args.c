#include <stdio.h>
#include <pthread.h>

void *printNum(void *arg)
{
    int num = *((int *)arg);
    printf("Thread received number : %d\n", num);
    return NULL;
}

int main()
{
    pthread_t threads[5];
    int numbers[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        pthread_create(&threads[i], NULL, printNum, &numbers[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        pthread_join(threads[i], NULL);
    }

    return 0;
}