/*
Write a program that store student information and search information using name.
*/
#include<stdio.h>
#include<string.h>


struct dob
{
    int date;
    char month[10];
    int year
};

struct student
{
    char name[50];
    int roll;
    struct dob db;
};


int main()
{
    int i;
    struct student std[10];
    char c[20];
    int SIZE;
    
    printf("Enter the number of students to enter data; ");
    scanf("%d", &SIZE);
    
    system("cls");
    

    for(i=0; i<SIZE; i++)
    {
    printf("Enter the name of the student: ");  scanf("%s", std[i].name);
    printf("Enter the Roll number of %s: ", std[i].name);  scanf("%d", &std[i].roll);
    printf("Now enter Date of Birth of %s(DD/MMM/YYYY): ", std[i].name); scanf("%d %s %d", &std[i].db.date, std[i].db.month, &std[i].db.year);
    }

    system("pause");
    system("cls");

    print_data(std, SIZE);
    
    FILE *ptr;
    ptr= fopen("Student Data File Program.txt", "w");
    
    for(i=0; i<SIZE; i++)
    {
        fprintf(ptr, "Name of the student is %s\n", std[i].name);
        fprintf(ptr, "Roll Number of %s is %d\n", std[i].name, std[i].roll);
        fprintf(ptr, "Date of Birth of %s is: %d/%s/%d\n\n", std[i].name, std[i].db.date, std[i].db.month, std[i].db.year);
    }
    fclose(ptr);

    system("pause");
    system("cls");

    printf("Now enter the record data to search: ");
    scanf("%s", c);
    
    system("cls");

    for(i=0; i<SIZE; i++)
    {
        if(strcmp(std[i].name, c)==0)
        {
            printf("Name of student is %s\n", std[i].name);
            printf("Roll Number of the student is: %d\n", std[i].roll);
            printf("Date of Birth of %s is: %d/%s/%d\n\n", std[i].name, std[i].db.date, std[i].db.month, std[i].db.year);
        }
    }

    system("pause");
    return 0;
}


void print_data(struct student std[],int SIZE)
{
    
    
    for(int i=0; i<SIZE; i++)
    {
        printf("Entered Data is following\n");
        for(int j=0; j<30; j++)
            printf("*");
            printf("\n\n");
        printf("Name of student is : %s\n", std[i].name);
        printf("Roll Number of %s is: %d\n", std[i].name, std[i].roll); fflush(stdin);
        printf("Date of Birth of %s is: %d/%s/%d\n\n", std[i].name, std[i].db.date, std[i].db.month, std[i].db.year);
    }
}


