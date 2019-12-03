#include<stdio.h>

int main()
{
    char str[50];
    int i;

    printf("Enter the string: ");
    gets(str);

    for(i=0; str[i]!= '\0'; i++)
    {
        if(i==0)
            {if(str[i]>='a' && str[i]<='z')
                {
                    str[i]= str[i]-32;
                    printf("%c", str[i]);
                }
            else
                    printf("%c", str[i]);}
        else if(str[i]==32)
            {
                i++;
                if(str[i]>='a' && str[i]<='z')
                {
                    str[i]= str[i]-32;
                    printf("%c", str[i]);
                }
            else
                    printf("%c", str[i]);
            }
    }

}
