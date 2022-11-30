#include<a.out.h>
#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>


void* hello()
{
    printf("Hello from thread %d", 1);
    return NULL;

}


int main()
{
    pthread_t thread[2];
    int i = 0 ;
    int j = 0 ;
    int number = 0 ;
    

    for(i;i<2;i++)
    {
        pthread_create(&thread[i],NULL,hello,NULL);

    }

    for(j;j<2;j++)
    {
        pthread_join(&thread[j],NULL);

    }

    return 0;
}