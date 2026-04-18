#include<stdio.h>
int main() {
    int a[10],i,sum=0;
    float average;
    printf("enter ten num:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
     for(i=0;i<=9;i++)
     sum=sum+a[i];
     average=sum/10.0;
printf("average is %f",average);
return 0;
}