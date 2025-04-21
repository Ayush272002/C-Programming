#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int ready = 0;
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

void *waiter(void *arg)
{
    pthread_mutex_lock(&lock);
    while (ready != 10)
    {
        printf("Waiting... Ready is currently %d\n", ready);
        pthread_cond_wait(&cond, &lock);
    }

    printf("All setters done! Final ready = %d. Proceeding.\n", ready);
    pthread_mutex_unlock(&lock);
    return NULL;
}

void *setter(void *arg)
{
    sleep(1);
    pthread_mutex_lock(&lock);
    ready++;
    printf("Setter thread incremented ready to %d\n", ready);
    pthread_cond_signal(&cond);
    pthread_mutex_unlock(&lock);
    return NULL;
}

int main()
{
    pthread_t waiter_thread;
    pthread_t setters[10];

    // Create the waiter thread
    pthread_create(&waiter_thread, NULL, waiter, NULL);

    // Create 10 setter threads
    for (int i = 0; i < 10; i++)
    {
        pthread_create(&setters[i], NULL, setter, NULL);
    }

    // Join all setter threads
    for (int i = 0; i < 10; i++)
    {
        pthread_join(setters[i], NULL);
    }

    // Join the waiter thread
    pthread_join(waiter_thread, NULL);

    return 0;
}