#include<stdio.h>

float calculate_charge(float);

int main()
{
    int cst[3]={1,2,3};
    float hrs[3];
    float rs[3];

    for (int i=0; i<=2; i++)
        {
        printf("Enter the number of hours parked for Costumer %d: ", cst[i]);
        scanf("%f", &hrs[i]);
        rs[i] = calculate_charge(hrs[i]);
        }


    printf("Costumer             Hours                 Charge");
    printf("\n");
    for (int i=0; i<=2; i++)
        {
         printf("%d \t            ", cst[i]);
         printf("%0.2f\t           ", hrs[i]);
         printf("%0.2f\t           ", rs[i]);
         printf("\n");
        }

}

float calculate_charge(float hrs)
{
    float rs;

    if(hrs<=3)
        rs = 2;
    else if(hrs>3 && hrs<24)
        rs = (2+(hrs-3)*0.5);
    else if(hrs==24 || hrs==24.0)
        rs = 10.0;
    else if(hrs<0 || hrs>24)
        printf("Enter the Valid Hours of time!!!");

    return rs;
}
