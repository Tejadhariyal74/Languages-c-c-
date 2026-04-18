#include <stdio.h>

int main()
{

    int r;
    float A;
    printf("enter the radius of circle r:");
    scanf("%d", &r);
    A = 3.14 * r * r;
    printf("area of circle is %f", A);
    return 0;
}