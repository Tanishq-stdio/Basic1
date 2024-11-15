#include<stdio.h>
#include<string.h>

int main()
{ 
    char Arr[] = {'H','E','l','l','o','\0'};

    char *Brr = "Hello";

    printf("%d\n",sizeof(Arr));
    printf("%d\n",sizeof(Brr));

    return 0;
}