//A program to find the area of a Right Angled Triangle

#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    float p, b;

    printf("Put the Length of first side of the rectangle\n");
    scanf("%f",&p);
    printf("Put the Length of second side of the rectangle\n");
    scanf("%f",&b);

    printf("The area of the rectangle is %f\n", p*b);
    printf("The perimeter of the rectangle is %f\n", 2*p + 2*b);

    getch;
    return 0;
}