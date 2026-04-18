#include<stdio.h>
int reverse (int);
int main () {
    int num;
    printf("enter a num:");
scanf("%d",&num);
reverse(num);
 int reverse_no = reverse(num);
printf("the reverse numer is %d",reverse_no);
return 0;
}
int reverse(int num)
{
    int rev=0; int rem;
    while(num!=0)
    {
rem=num%10;  // last digit of number
rev=rev*10+rem; // generate a  reverse number.
num=num/10;    //decrease the num.
    }
    return rev;
}