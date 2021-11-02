//A program to calculate the Area and Circumference of Circle

#include<stdio.h>
#include<conio.h>

int main()
{
    float a;

    printf("Please put the length of side of the square (decimal numbers are fine too)\n");
    scanf("%f",&a);

    printf("The area of square is %7.2f sqaure units\n", a*a);
    printf("The perimeter of the sqaure is %7.2f units \n", 4*a);

    getch;
    return 0;
}