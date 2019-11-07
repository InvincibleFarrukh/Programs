#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5]={5,7,3,2,9};
    

    assc(array, 5);



    return 0;
}

int assc(int ali[],int m)
{
    int i,j,h;

    for(i=1; i<m; i++)
    {
        for(j=0; j<m-1; j++)
        {
            if(ali[j]<ali[j+1])
            {
                h=ali[j];
                ali[j]=ali[j+1];
                ali[j+1]=h;
            }
        }
    }
for( j=0; j<5; j++)
        {printf("%d", ali[j]);}

}
