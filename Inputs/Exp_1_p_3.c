#include <stdio.h>
#include <math.h>

main()
{
    int a,b,c,p;
    float s,area;

    a = 5;
    b = 9;
    c = 6;

    printf("The three sides of Triangle : %d, %d, %d\n", a,b,c);

    p = a+b+c;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Perimeter = %d\nArea = %.2f", p,area);


}
