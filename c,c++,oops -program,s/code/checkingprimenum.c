#include<stdio.h>
int main () {
    int x,i;
    printf("enter a num:");
    scanf("%d",&x);
    for (i=2;i<=x-1;i++)
    {
if(x%i==0);
break ;
    } 
if (i==x) {
printf(" %d is prime",x);
}
else {
printf("%d is not prime",x);
}

return 0;
}