#include <stdio.h>
#include <pthread.h>

void *myThread(void *arg)
{
    printf("Hello from thread!\n");
    return NULL;
}

int main()
{
    pthread_t thread;

    // creation of thread
    pthread_create(&thread, NULL, myThread, NULL);

    // wait for thread to finish
    pthread_join(thread, NULL);
    
    printf("Thread has finish executing \n");
    return 0;
}