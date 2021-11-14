//Table
//Practice for Nesting Loop

#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Write the Value \n");
    scanf("%d", &a);
    printf("Uptil where you want to continue it \n");
    scanf("%d", &c);

    for(b=1; b<=c; b++)
    {
        for(d=1;d<=c;d++)
        {
            printf("%d\t", b*d);
        }
        printf("\n");
    }
    return 0;
}