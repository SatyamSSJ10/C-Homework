// A program to covert Seconds into Hours Minutes Seconds format

#include<stdio.h>

int main()
{
    int s;
    printf("Please put the number of seconds : \n");
    scanf("%d", &s);

    int hour = s/3600;
    int minutes = (s%3600)/60;
    int seconds = (s%3600)%60;
    printf(" Hours = %d Minutes = %d Seconds = %d", hour, minutes, seconds);
    return 0;
}
