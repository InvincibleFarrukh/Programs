#include<stdio.h>

int FindEven(int []);

#define SIZE 10

int main(void)
{
        int array[SIZE]={3,50,4,2,6,7,8,9,10,40};

        int cnt;

        cnt = FindEven(array);

        printf("Total number of even number are: %d\n", cnt);
}


int FindEven(int array[])
{
    int i, counter=0;

    for(i=0; i<SIZE; i++)
    {
        if((array[i]%2)==0)
            counter++;
    }

    return counter;
}
