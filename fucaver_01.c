#include<stdio.h>
int sum()
{
    float a;
    float b;
    printf("Enter no 1:\n");
    scanf("%f",&a);
    printf("Enter the no2:\n");
    scanf("%f",&b);
    printf("Sum of numbers is %f\n",a+b);
    return 0;
}
int area()
{
    float side;
    printf("Enter the length of side:\n");
    scanf("%f",&side);
    printf("Area of square is %f:\n",side*side);
    return 0;
}

int average()
{
    float n1;
    float n2;
    float n3;
    float n;
    float avg;
    printf("Enter no 1:\n");
    scanf("%f",&n1);
    printf("Enter no 2:\n");
    scanf("%f",&n2);
    printf("Enter no 2:\n");
    scanf("%f",&n3);
    n = n1+n2+n3;
    avg = n/3;
    printf("Average of these no is %f\n",n);
    return 0;
}
int main()
{   label1:
    printf("Hello welocome to calmac\n");
    
    int num;
    printf("Enter 1 for average of numbers:\n2 for sum of numbers:\n3 for area of square:\n");
    scanf("%d",&num);
    if (num==1)
    {
        average();
        goto label1;
    }
    else if (num==2)
    {
        sum();
        goto label1;
    }
    else if (num==3)
    {
        area();
        goto label1;
    }
    else
    {
        printf("Invalid Input\n");
        goto label1;
    }
    
}