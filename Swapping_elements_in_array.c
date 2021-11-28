//Program to switch the places of numbers in an array

#include <stdio.h>

int main()
{
        int numbers[100], i, n, end,temp;
        
        printf("total amount of numbers in your list\n");
        scanf("%d",&n);
        printf("Enter the numbers in the list\n");
        
        for(i=0;i<n;i++) //Getting the numbers
        {
            scanf("%d", &numbers[i]);
        }
        end=n-1;
        for(i=0;i<n, end>=i;i++,end--) //Swapping the Array
        {
            temp=numbers[i];
            numbers[i]=numbers[end];
            numbers[end]=temp;
            
        }
        printf("the reverse order numbers are\n");
        
        for(i=0;i<n;i++) //Printing the Array
        {
            printf("%d\t", numbers[i]);
        }
        return 0;
}