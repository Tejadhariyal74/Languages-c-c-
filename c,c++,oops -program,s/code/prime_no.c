#include<stdio.h>
int main () {
    int a;
    printf("enter a num:");
scanf("%d",&a);
if(a==1)
{
    printf("neither prime nor composite");
}
else if(a<=0)
{
    printf("you should to chose natural no.");
}
 else if(a==2||a==3||a==5||a==7)
{
    printf("prime number.");
}

else if(a%2==0 ||a%3==0 ||a%5==0 ||a%7==0)
{
    printf("composite number.");
}
else
{
    printf("prime number.");
}
return 0;
}

