//The problem is to rotate a given array to the right by k steps, meaning each element is shifted k positions to the right, with wrap-around.
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
    for(i=rotate;i<n;i++)
    {  arr1[i-rotate]=arr[i];
        last=i-rotate;
    }
    for(i=last+1,j=0;i<n;i++,j++)
    {   arr1[i]=arr[j];
    }
    for(i=0;i<n;i++)
    {  printf("%d ",arr1[i]);
    }
}
