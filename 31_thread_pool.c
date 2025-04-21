#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

#define NUM_THREADS 3
#define NUM_TASKS 6

pthread_t thread_pool[NUM_THREADS];

void *worker(void *arg)
{
    int task_id = *((int *)arg);
    printf("Thread %ld is processing task %d\n", pthread_self(), task_id);
    free(arg); // Free task_id memory
    return NULL;
}

int main()
{
    int *task_id;
    for (int i = 0; i < NUM_TASKS; i++)
    {
        task_id = (int *)malloc(sizeof(int));
        *task_id = i;
        pthread_create(&thread_pool[i % NUM_THREADS], NULL, worker, task_id);
    }

    for (int i = 0; i < NUM_TASKS; i++)
    {
        pthread_join(thread_pool[i % NUM_THREADS], NULL);
    }

    return 0;
}
