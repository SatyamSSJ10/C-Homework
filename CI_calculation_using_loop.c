//Calculate Compound Interest using Loop
//the interest is calculated by substracting principal from amount

#include<stdio.h>

int main()
{
    float p, r, t, n, a, i;
    a=1;
    printf("Please put the principal amount : \n");
    scanf("%f",&p);
    n = p;
    printf("Please put the rate of interest : \n");
    scanf("%f",&r);
    printf("Please put the time : \n");
    scanf("%f",&t);

    do{
    p+=p*r/100;
    a++;
    }while(a<=t);  
    printf("Amount : %f\n", p);
    printf("Interest : %f\n", p-n);
   
    return 0;
}
