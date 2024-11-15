#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;

    // Step1: Allocate the memory
    ptr = (int *)malloc(5 * sizeof(int));
    
    //step2: use the memory
    //Logic

    //Step3: Deallocate the memory
    free(ptr);

    return 0;
}