#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int a, b, c, s, area;
    scanf("enter value of three arms of triangle:");
    printf("%d %d %d", &a, &b, &c);
    if(a+b>c && b+c>a && c+a>b)
    {
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area of triangle is = %d", area);
    }
}
