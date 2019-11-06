#include<stdio.h>
#define SIZE 10

int main()
{
    int array[SIZE]={19,2,15,7,11,9,13,5,17,1};

    int i,j;

    printf("%s%13s%17s\n", "Element", "Value", "Histogram");
    
    for(i=0; i<=array[SIZE]-1;i++)
    {
        printf("%7d%13d           ", i, array[i]);

        for (j=1; j<=array[i];j++)
            printf("%c", '*');
            printf("\n");
    }

}

