/* pro-2_thread.c
 * author : shimjihun
 * e-mail : jihunddok@gmail.com
 *
 * practice for pthread programming
 *
 * since : 2019.12.13 FRI
 * due to : 2019.12.19 THU
 * */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define THREAD_NUMBER 7
void *thread_func(void *arg){
    //thread function that do in thread
    printf("Thread : I'm [%d]Thread\n",arg);
    return arg;
}

void main(){
    pthread_t tid[THREAD_NUMBER];
    int status;
    int i;
   
    for(i = 0; i < THREAD_NUMBER; i++){
        status = 0;
        status = pthread_create(&tid[i],NULL,thread_func,(void*)i);
       
        if(status != 0 ){

            fprintf(stderr,"Create thread %d: %d\n",i,status);
            exit(1);
        }
    }
    
    pthread_exit(NULL);
    return;
}
