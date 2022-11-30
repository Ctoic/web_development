#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>


int number ;


void* hello()
{
    number++;
    printf("Hello from thread %d", number);
    return NULL;

}

int main(int agrc , void* argv[])
{
    pthread_t thread[10];

    int i = 0 ; 
    int j = 0 ; 


    for(i ; i<10 ; i++)
    {
        pthread_create(&thread[i],NULL,hello,NULL);
    }

    for(j; j<10 ; j++)
    {
        pthread_join(&thread[j],NULL);

    }

    return 0 ;

}