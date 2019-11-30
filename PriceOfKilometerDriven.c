#include<stdio.h>

int main()
{
    int liter,km;

    int price=0;

    printf("Enter the price of per liter: ");
    scanf("%d", &liter);

    printf("Enter the kilometers driven: ");
    scanf("%d", &km);

    while(km!=-1)
    {
        price = price+(liter*km);

    printf("Calculated Price is:%d", price);
    printf("\n\n\n");
    printf("NOW AGAIN Enter the kilometers driven(-1 to exit): ");
    scanf("%d", &km);
    }

    printf("Total price is: %d", price);

    for(int i=0; i<=20; i++)
        printf("*");
    printf("\n\n\n");
    return 0;
}

