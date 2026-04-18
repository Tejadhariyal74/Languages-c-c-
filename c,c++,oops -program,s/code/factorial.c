#include<stdio.h>
int main (){
    int num;
    //int val=1;
    printf("enter that number of which you want know factorial:  ");
    scanf("%d",&num);
    // FINDING FACTORIAL OF NUBER WITH LOOPS.
//     for(int i=num;i>1;i--)
//     {
//  val=val*i;
//     }

//  FINDING FACTORIAL OF NUBER WITH recursion.
int factorial=fact(num);
    printf("factorial of number is %d",factorial);
}
int fact (int a)
{
    if(a==0)
    {
        return 1;
    }
    int factNm1=fact(a-1);
    int factN=factNm1*a;
    return factN;
}