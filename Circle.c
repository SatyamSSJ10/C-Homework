//A program to calculate the Area and Circumference of Circle

#include<stdio.h>
#include<conio.h>

int main()
{
    float a, pi;

    pi = 3.14; 
    
    printf("Please put the radius of circle (could be a decimal number too)\n " );
    scanf("%f",&a);

    printf("The area of the given circle is %7.2f square units\n", pi*a*a);
    printf("the circumference of the given circle is %7.2f units\n", 2*pi*a);

    getch;   //getch is added to make the compiled program open
    return 0;
}