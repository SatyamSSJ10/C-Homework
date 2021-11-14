//To Find Quotient and Remainder using C

#include<stdio.h>

int
main()
{
    int di, dv, qo, re;
    
    printf("Put the Dividend : \n");
    scanf("%d",&di);
    printf("Put the Divisor : \n");
    scanf("%d", &dv);

    qo=di/dv;
    re=di%dv;

    printf("the Quotient is : %d \n", qo);
    printf("the Remainder is : %d \n", re);

    return 0;
}