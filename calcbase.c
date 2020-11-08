#include <stdio.h>
int sum()
{
    int num1;
    int num2;

    printf("Enter the 1st number:\n");
    scanf("%d", &num1);
    printf("Enter the 2nd number:\n");
    scanf("%d", &num2);
    printf("Sum is %d\n\n\n", num1 + num2);
    return 0;
}
int sub()
{
    int s1;
    int s2;
    printf("Enter the 1st number:\n");
    scanf("%d", &s1);
    printf("Enter the 2nd number:\n");
    scanf("%d", &s2);
    printf("answer is %d\n\n\n", s1 - s2);
    return 0;
}
int multi()
{
    float m1;
    float m2;
    printf("Enter the first no:\n");
    scanf("%f", &m1);
    printf("Enter the 2nd number:\n");
    scanf("%f", &m2);
    printf("Multiplication of %f and %f is %f\n\n\n", m1, m2, m1 * m2);
    return 0;
}
int div()
{
    float d1;
    float d2;
    printf("Enter the inner value(divident):\n");
    scanf("%f", &d1);
    printf("Enter the number:\n");
    scanf("%f", &d2);
    printf("When %f is divided by %f it gives %f\n\n\n", d1, d2, d1 / d2);
    return 0;
}
int area()
{
    float side;
    printf("Enter the length of side:\n");
    scanf("%f", &side);
    printf("Area of square is %f:\n\n\n", side * side);
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
    scanf("%f", &n1);
    printf("Enter no 2:\n");
    scanf("%f", &n2);
    printf("Enter no 2:\n");
    scanf("%f", &n3);
    n = n1 + n2 + n3;
    avg = n / 3;
    printf("Average of these no is %f\n\n\n", n);
    return 0;
}
int main()
{
    
    int ch;
    label1:

    printf("Enter one of following:\n1) sum of 2 no.\n2)subtracting 2 no\n3) multiply 2 no\n4) divide \n5) area of square\n6)average of 3 no\n");
    scanf("%d", &ch);
    if (ch == 1)
    {
        sum();
        goto label1;
    }
    else if (ch == 2)
    {
        sub();
        goto label1;
    }
    else if (ch == 3)
    {
        multi();
        goto label1;
    }
    else if (ch == 4)
    {
        div();
        goto label1;
    }
    else if (ch == 5)
    {
        area();
        goto label1;
    }
    else if (ch == 6)
    {
        average();
        goto label1;
    }
    else
    {
        printf("Invalid Input try again\n");
        goto label1;
    }
    return 0;
}