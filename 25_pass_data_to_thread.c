#include <stdio.h>
#include <pthread.h>
#include<stdlib.h>

void *printMessage(void *arg)
{
    char *message = (char *)arg;
    printf("Thread says : %s\n", message);
    return NULL;
}

void *printNumber(void *arg)
{
    int num = *((int *)arg);
    printf("Number is %d\n", num);
    return NULL;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Function call be should be ./a.out <int param>\n");
        return 0;
    }

    pthread_t thread;
    char msg[] = "Hello world!!";

    pthread_create(&thread, NULL, printMessage, msg);
    pthread_join(thread, NULL);

    int number = atoi(argv[1]);
    pthread_create(&thread, NULL, printNumber, &number);
    pthread_join(thread, NULL);

    return 0;
}