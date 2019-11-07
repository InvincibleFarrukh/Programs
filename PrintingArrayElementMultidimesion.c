#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[5][4]={{2,5,1,3},{8,4,2,6},{7,1,6,9},{2,1,4,3},{7,4,1,2}};

    int i=0,j=0;

for(i=0; i<5; i++)
{
    for(j=0;j<4;j++)
    {
        printf("%d\t", array[i][j]);
    }
    printf("\n");
}
    return 0;
}
