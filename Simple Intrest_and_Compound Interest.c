//A program to calculate simple interest and compound interest
//We'll take help of Math header file (pow)

#include<conio.h>
#include<stdio.h>
#include<math.h>

int main()
{
    float  A, p;
    double r, t, n, x, ci, si;
    printf("Please enter Principal\n");
    scanf("%f", &p);
    printf("Please enter Rate (per year)\n");
    scanf("%lf", &r);
    printf("Please enter time (in year)\n");
    scanf("%lf", &t);
    printf("Please enter the number of times interest should be calculated a year (Compound frequency)\n");  //compound frequenct, For annual = 1, half-yearly = 2, Quarterly = 4 , per month = 12
    scanf("%lf", &n);

    si = p*r*t/100/n;
    printf("The Simple Interest calculated from your given values are %lf\n", si);

    x = pow(1+r/n/100, t*n);
    ci = (p*x) - p;
    printf("The Value of Compound interest is %lf\n", ci);

    getch;
    return 0;
}
