#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

float pctg(int);

int main()
{
    int array[5];

    int sum=0;

    for(int i=0; i<5; i++)
        {
            do
                {printf("Enter the marks of subject: \n");
                scanf("%d", &array[i]);}
            while (array[i]<0 || array[i]>100);

            sum += array[i];
        }

    printf("\n\nTotal Marks are:%d\n\n\n", sum);

    for(int j=1; j<50; j++)
        printf("*");
        printf("\n");


    printf("Obtained Percentage is : %0.2f\n\n\n", pctg(sum));


    for(int j=1; j<50; j++)
        printf("*");
        printf("\n");


    int p = pctg(sum);

    char grade,sign;
    float cp;

    if(p>=90 && p<=100)
       {
        grade = 'A';
        cp= 4.0;
       }
    else if(p>=85 && p<90)
        {
        grade= 'A';
        sign='-';
        cp= 3.7;
        }
    else if(p>=80 && p<85)
        {
        grade= 'B';
        sign='+';
        cp= 3.3;
        }
    else if(p>=75 && p<80)
        {
        grade= 'B';
        cp= 3.0;
        }
    else if(p>=70 && p<75)
        {
        grade= 'B';
        sign='-';
        cp= 2.7;
        }
    else if(p>=65 && p<70)
        {
        grade= 'C';
        sign='+';
        cp= 2.3;
        }
    else if(p>=60 && p<65)
        {
        grade= 'C';
        cp= 2.0;
        }
    else if(p>=55 && p<60)
        {
        grade= 'C';
        sign='-';
        cp= 1.7;
        }
    else if(p>=50 && p<55)
        {
        grade= 'D';
        cp= 1.3;
        }
    else
        {
        grade= 'F';
        cp= 0.0;
        }


    printf("Your Grade is %c%c and Credit Points are %0.2f\n\n\n", grade,sign,cp);


    for(int j=1; j<50; j++)
        printf("*"); 
        printf("\n");
}

float pctg(int sum)
{

    float percentage;
    percentage= ((sum/500.0)*100.0);

    return percentage;
}
