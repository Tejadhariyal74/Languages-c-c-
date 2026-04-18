// We can swap two num.
//1.With the help of third variable.
// #include <stdio.h>
// int main () {
//     int a,b,t;
//     printf("enter the  num a:");
//     scanf("%d",&a);
//  printf("enter the  num b:");
// scanf("%d",&b);
// t=a;
// a=b;
// b=t;
// printf("a=%d b=%d",a,b);
// return 0;
// }

//2.Swapping using function(call by reference).
void swap (int*,int*);
#include <stdio.h>
int main () {
    int a,b,t;
    printf("enter the  num a:");
    scanf("%d",&a);
 printf("enter the  num b:");
scanf("%d",&b);
swap(&a,&b);
printf("a=%d b=%d",a,b);
return 0;
}
void swap (int* x,int* y)
{
    int t;
t=*x;
*x=*y;
*y=t;
}