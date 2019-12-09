#include<stdio.h>

int main()
{
    int array[10]={12,32,20,4,10,30,11,25,18,8};
    int i,j;

    printf("Number \t Histogram\n");
    for(i=0; i<10; i++)
        {
            printf("%d  \t", array[i]);
            for(j=1; j<=array[i]; j++)
                printf("*");
                printf("\n");
        }
return 0;
}
