#include<stdio.h>

int main()
{



float f,c;

printf("Enter the temperature in Celcius =");
scanf("%f",&c);

f = (c*9/5)+32;
printf("Temperature in fahrenheit= %.2f",f);
return 0;
}
