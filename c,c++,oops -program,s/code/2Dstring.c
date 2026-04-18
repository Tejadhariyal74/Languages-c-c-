#include<stdio.h>
int main () {
    int i;
    char s[3][10];
    printf("enter any 3 string:");
    for(i=0;i<=2;i++)
     gets(&s[i][0]);      //gets(s[i]);
     for(i=0;i<=2;i++)
        puts(s[i]);         //printf("%s\n",&s[i]);
     return 0;
}