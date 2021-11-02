//Program to Convert Celcius into Fahrenheit or Vice Versa
//I'm using If..else statement to do the trick, but I should have used a switch statement

#include<stdio.h>
#include<conio.h>

int main()
{
    char a, b, c;
    float f, d, x, y, z;
   
    printf("Choose the type of conversion you want\n");
    printf("A - Celcius to Fahrenheit\n OR\nB - Fahrenheit to Celcius\n");
    scanf("%c", &c);

    if(c!=a || c!=1){  //for first option | != is Equality operater
        printf("You have chose to convert form Celcius to Fahrenheit\n");
        printf("Please enter the Temprature \n");
        scanf("%f", &d);
        x = 1.8*d;
        y = x + 32;
        printf("The Value of given temprature %f Celcius in Fahrenheit is %f\n", d, y);

    }
    
    else{  //for second option

        printf("You have not selected A or have selected B. You have chose to convert from Fahrenheit to Celcius\n");
        printf("Please enter the Temprature \n");
        scanf("%f", &d);
        x = 0.55*d;
        y = x - 32;
        printf("The Value of given temprature %f Fahrenheit in Celcius is %f\n", d, y);
    }

    getch;
    return 0;
}
