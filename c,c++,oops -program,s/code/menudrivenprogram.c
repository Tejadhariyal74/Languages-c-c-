#include<stdio.h>
int main () {
    int choice,a,b,s;
    
printf("addition\n");
printf("odd and even\n");
printf("printing n numbers\n");
printf("exit\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch (choice) 
{
case 1:
printf(" enter two numbers\n");
scanf("%d %d",&a,&b);
s=a+b;
printf("sum is %d\n",s);
break ;
case 2:
printf(" enter a number\n");
scanf("%d ",&a);
if(a%2==0)
{
printf("even num");
}
else 
{
printf("not even");
break ;
}
case 3:
printf(" enter a number\n");
scanf("%d ",&a);
for(b=1;b<=a;b++)
printf("%d",b);
break ;
case 4:
exit (0);
default :
printf("invalid choice");
}
return 0;
}
