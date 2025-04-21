#include <stdio.h>
#include <pthread.h>
#include<stdlib.h>

typedef struct Data
{
    int id;
    char name[20];
} data_t;

typedef struct
{
    int a, b;
} Args;

void *print(void *arg)
{
    data_t *data = (data_t *)arg;
    printf("Thread ID : %d, Name : %s\n", data->id, data->name);
    return NULL;
}

void *sum_thread(void *arg)
{
    Args *nums = (Args *)arg;
    int *res = malloc(sizeof(int));
    *res = nums->a + nums->b;
    return res;
}

int main()
{
    pthread_t thread1, thread2;
    data_t d = {1, "Ayush"};
    Args args = {10, 20};

    pthread_create(&thread1, NULL, print, &d);
    pthread_create(&thread2, NULL, sum_thread, &args);

    pthread_join(thread1, NULL);
    void *res;
    pthread_join(thread2, &res);

    printf("Sum is %d\n", *(int *)res);
    free(res);

    return 0;
}