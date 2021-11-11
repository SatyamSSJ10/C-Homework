//Calculating Compound Interest with For Loop
// the main interest is calculated after adding the interest of each year

#include<stdio.h>

int main()
{
    float p, r, t, a, n, i;
    n = 0;
    printf("Please put the principal amount : \n");
    scanf("%f",&p);
    printf("Please put the rate of interest : \n");
    scanf("%f",&r);
    printf("Please put the time : \n");
    scanf("%f",&t);

    for (i=1; i<=t; i++)
    {
         a = p;
         p+=p*r/100; // Interest after Nth Year
         /* Interest in the Nth Period */
         a = p-a;
         printf("Interest in the %f year is %f \n", i, a);
         n+=a;
    }
    printf("Amount : %f\n", p);
    printf("Interest : %f\n", n);
    return 0;
}