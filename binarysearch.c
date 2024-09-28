#include<stdio.h>
int main(){
    int i,n,low,high,mid,key,array[5];
    printf("enter a elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&array[i]);
    }
    printf("enter a value find n:");
    scanf("%d",&key);
    low =0;
    high=n-1;
    while(low<=high)
    {
    mid=low+high/2;
    if(array[mid]<key)
    {
    low=mid-1;
    }
    else if(array[mid]==key)
    {
        printf("%d %d/n",key,mid+1);
        break;
    }
    else{
    high=mid+1;
    }
    }
    if (low>high)
    printf("not found");
    return 0;
}