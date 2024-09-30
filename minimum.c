# include<stdio.h>
int main()
{
    int arr[]={8,2,5,1,9,6};
    int min=arr[0];
    int n =  sizeof(arr);
    for(int i=1;i<=n;i++)
    {
        if(arr[i]<min){
            min=arr[i];
    }
    }
	 printf("%d",min);
}