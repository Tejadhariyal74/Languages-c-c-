#include <stdio.h>
int main() {
int x,y,c;
printf ("enter a number x:");
scanf("%d",&x);
printf ("enter a number y:");
scanf("%d",&y);
c=x>y? x:y;
printf("greater num is %d",c);
return 0;
}