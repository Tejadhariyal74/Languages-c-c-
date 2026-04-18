#include<stdio.h>
int main() {
//     int i;
//     char s[20]; 
//     printf("enter your name");
//     gets(s);
// /*for(i=0;s[i]!=\'0';i++)
// printf("%c",s[i]);
// printf("%s",&s[i]);*/
// puts(&s[0]);
// return 0;
// }

// REVERSE A STRING.
char s[]= "dhariyals";
int len=0;
int temp;
while(s[len]!='\0')
{
    len++;
}
printf("the length of this string is %d\n",len);
for(int i=0;i<(len-1)/2;i++)
{
temp=s[i];
s[i]=s[len-1-i];
s[len-1-i]=temp;
}
printf("now the string is %s",s);
return 0;
}
