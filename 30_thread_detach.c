#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *my_thread(void *arg)
{
    for (int i = 0; i < 10; i++)
    {
        printf("Thread is running : %d\n", i);
    }
    return NULL;
}

int main()
{
    pthread_t thread;

    pthread_create(&thread, NULL, my_thread, NULL);
    pthread_detach(thread);

    printf("Main thread continues \n");
    printf("Hello world!!\n");
    sleep(10);
    return 0;
}