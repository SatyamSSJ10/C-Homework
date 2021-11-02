//A program to find the area of a Right Angled Triangle

#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    float p, b;
    double h; //double is like float but is used to store high precision values, it is of 64bit and it's format specifier is %lf

    printf("Put the Length of Perpendicular side of the triangle \n");
    scanf("%f",&p);
    printf("Put the Length of Base side of the triangle \n");
    scanf("%f",&b);
    h = sqrt(p*p + b*b);  //sqrt statement is from header file math.h
    printf("the Length of Hypotenuse side of the triangle is %.3lf\n", h);

    printf("Area of the Triangle is %7.2f square units\n",0.5*p*b);
    printf("The perimeter of the triangle is %7.2f units\n",p+b+h);

    getch;
    return 0;
}