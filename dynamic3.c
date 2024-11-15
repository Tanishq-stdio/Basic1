#include<stdio.h>         //standard input output
#include<stdlib.h>        //standard library

int main()
{
    int *ptr = NULL;

    // Step1: Allocate the memory
    ptr = (int *)calloc(5, sizeof(int));
        
    //step2: use the memory
    //Logic
4
    //Step3: Deallocate the memory
    free(ptr);

    return 0;
}