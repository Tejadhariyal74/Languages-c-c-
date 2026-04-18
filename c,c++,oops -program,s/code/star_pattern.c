//Print the following star pattern .the number of lines in the pattern should be equal to the value entered by the user. 
//the pattern looks like this for n=4
//  *
//  ** 
//  ***
//  ****


#include<stdio.h>
int main() {
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);

    //Run this loop n times
    for (int i=0;i<n;i++)
    {
        // print (i+1) stars
        for(int j=0;j<i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}