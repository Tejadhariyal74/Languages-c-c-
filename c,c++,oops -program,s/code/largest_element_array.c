#include<stdio.h>
int returnmax(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
      arr[2]=65;
    return max;
    
}

int main () {
    int arr[]= {12,15,555,655,18};
    int max= returnmax(arr,5);
    printf("the maximum element in the array is %d\n",max);
    for (int i=0;i<=4;i++)
    {
        printf("the element of array is %d\n",arr[i]);
    }
    return 0;
}