#include<stdio.h>
#include<stdlib.h>

int gcd(int, int);

int main()
{
    int x,y;
    int z;

    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the Second number: ");
    scanf("%d", &y);

    if(x==0 || y==0)
         z=0;
    else
        z= gcd(x,y);

    printf("GCD is %d", z);
}


int gcd(int a, int b)
{
    if(a==0)
        return b;
    else if(a<b)
        return gcd(b%a, a);
    else
        return gcd(a%b, b);
}

