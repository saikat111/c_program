#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    const a=7,b=2;
    x=pow(a,2)+ pow(b,2)+(a/b)+(a%b);
    printf("Answer: %f", x);
    return 0;
}
