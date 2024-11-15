#include<iostream>

using namespace std;

int main();
{
    int Arr[5];        //Static memory

    int *ptr = NULL;

    //step1:Allocate the memory
    ptr =new int[5];
    //ptr = (int *)malloc(5 * sizeof(int));

    //Step2: Use the memory 
    //logic

    //step3: Deallocate the memory
    delete []ptr;
    //free(ptr);

    return 0;
}