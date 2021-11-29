#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, d;
    float x, y; //Two roots of the equation
    printf("the Quadratic Equation is \n ax^2 + bx + c = 0\n Please input the value\n");
    printf("a = "); scanf("%f",&a); 
    printf("b = "); scanf("%f",&b); 
    printf("c = "); scanf("%f",&c); 
    d = (b*b) - 4*a*c;

    if(d<0)
    {
        printf("The roots of the equation are imaginary\n");
    }

    else
    {
       x = (-b+(sqrt(d)))/(2*a);
       y = (-b-(sqrt(d)))/(2*a);

       printf("The Two roots of the equation are %2.2f and %2.2f", x, y);
    }

  return 0;
}

