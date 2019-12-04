#include<stdio.h>
#define SIZE 100

int main()
{
    int array[SIZE];
    int i, key=0, a=0;

    for(i=0; i<SIZE; i+=2)
        array[i] = i;

    while(key!=-1)
    {
    printf("Now enter the number to find: ");
    scanf("%d", &key);

    a = nosearch(array, key);

    if(a==1)
        printf("Number Found...!!!\n");
    else if(key==-1)
        break;
    else
        printf("Number is not Found..!!!\n");
    }
}

int nosearch(int ar[SIZE], int k)
{
    int i,a;
    for(i=0; i<SIZE; i++)
    {
        if(ar[i]==k)
            {a=1;
    break;}
    }
    return a;
}
