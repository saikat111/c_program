#include <stdio.h>
#include <stdlib.h>

int main()
{
    float year,days,week,months;
    printf("Enter your day: ");
    scanf("%f", &days);
    year=(days/365);
    months=(days%365)/30;
    week=(months/7);
    days=(months%7);
    printf("year: %f\n", year);
    printf("months: %f\n", months);
    printf("week: %f\n", week);
    printf("day: %f\n");
    return 0;
}
