//Rotate an array to right by k steps.
#include <stdio.h>
int main()
{
    int n,i,rotate,last,j;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n],arr1[n];
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Enter rotation:");
    scanf("%d",&rotate);
    for(i=0;i<n-rotate;i++)
    {  arr1[i+rotate]=arr[i];
       last=i;
        
    }
    for(i=last+1,j=0;i<n;i++,j++)
    {   arr1[j]=arr[i];
    }
    for(i=0;i<n;i++)
    {  printf("%d ",arr1[i]);
    }
}
