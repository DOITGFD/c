#include<stdio.h>
int array_del(int arr[],int index,int *len);
int array_printer(int arr[],int len);
int len;
int main(){
    int index;
    printf("Enter the length of Array : ");
    scanf("%d",&len);
    int arr[len];
    printf("Enter the array elements : \n");
    for(int i = 0; i<len;i++){
        scanf("%d",&arr[i]);
    }
    array_printer(arr,len);
    printf("\nEnter the index position of element to be deleted : \n");
    scanf("%d",&index);
    array_del(arr,index,&len);
    array_printer(arr,len);
}
int array_del(int arr[],int index,int *len){
    // int length = *len;
    if (index < *len){
        for(int i = index; i< *len;i++){
            arr[i] = arr[i+1];
        }
        (*len)--;
    }
    else{
        return 1;
    }
}
int array_printer(int arr[],int len){
    for(int i = 0; i< len; i++){
        printf("%d\t",arr[i]);
    }
}