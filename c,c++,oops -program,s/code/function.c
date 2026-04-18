//there are 4 types of function .
//1. take nothing return nothing.
// #include <stdio.h>
// int main () {
// add();
// return 0;

// }
// void add() {
// int a,b,c;
// printf("enter two number:");
// scanf("%d %d",&a,&b);
// c=a+b;
// printf("%d",c);
// }

//2. Take something return nothing.

// # include <stdio.h>
// void main () {
//     int a,b;
//     void add(int,int);
// printf("enter two num:");
// scanf("%d %d",&a,&b);
//  add(a,b); //(Agar void likha to error aayega.because we are calling the function).

// return 0;
// }
// void add(int x,int y)
// {
// int c;
// c=x+y;
// printf("sum is %d",c);
// }

//3.takes nothing return something.
// int add(void);
// #include<stdio.h>
// int main () {
//     int s;
//     int add ();

//     s=add ();
// printf("sum is %d",s);
// return 0;
// }
// int add (void)
// {
//     int a,b,c;
//     printf("enter two num:");
//     scanf("%d %d",&a,&b);
// c=a+b;
// return (c);
// }

//4.takes something return nothing.
int add (int,int);
#include<stdio.h>
int main () {
        int x,y,s;
    printf("enter two num:");
    scanf("%d %d",&x,&y);
int add (int x,int y);
s=   add(x,y);
printf("sum is %d",s);
return 0;
}
int add (int a,int b)
{
    int c;
    c=a+b;
    return (c);
}