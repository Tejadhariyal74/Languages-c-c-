#include<stdio.h>
int main () {
//     int number;
//     // take input from the user;
//     printf(" enter that number of which you want to print multiplication table :");
//     scanf("%d",&number);
//     for(int i=1;i<=10;i++)
//     {
        
//  printf("table of %d*%d is=%d\n",number,i,number*i);
//     }

//     return 0;

// }

// PRINTING SUM OF "N" NATURAL NUMBERS.

int n,sum;
printf("enter the last number from where you want to know sum: ");
scanf("%d",&n);
//RUN in LINEAR TIME= Jaise-2 aapke input ka size bad raha vse hi algorithm time bd rha hai.because ye "n" times ch rha hai.
// for(int i=1; i<=number;i++)
// {
//     sum=sum+i;
// }

//RUN in CONSTANT TIME= Jaise-2 aapke input ka size bad raha vse hi algorithm same time mai run krega.
sum=(n*n+n)/2;
printf("the sum is %d",sum);
return 0;
}
