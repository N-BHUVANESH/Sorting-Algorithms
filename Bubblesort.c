#include<stdio.h>
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void bubble(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}



int main(){
    int n;
    printf("No. of elements:");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    printf("\nBefore\n");
    print(arr,n);
    bubble(arr,n);
    printf("\nAfter\n");
    print(arr,n);
    return 0;
}
