#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;

    ptr = (int *)malloc(5 * sizeof(int));         //Allocate memory

    ptr = (int *)realloc(ptr, 7 * sizeof(int));   //case1

    ptr = (int *)realloc(ptr, 3 * sizeof(int));   //case2
    
    ptr = (int *)realloc(NULL, 5 * sizeof(int));  //works as malloc

    ptr = (int *)realloc(ptr, 0);                 //works as free

    return 0;
}