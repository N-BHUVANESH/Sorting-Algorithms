#include <stdio.h>

int main()
{
    int a[9]={60,89,12,4,24,87,5,1,46};
    int i,j,min,mini,t;
    for(i=0;i<8;i++){
        mini=i;
        for(j=i+1;j<9;j++){
            if(a[mini]<a[j]){
                
                mini=j;
            }
        }
        t=a[mini];
        a[mini]=a[i];
        a[i]=t;
        
    }
   for(int i=0;i<9;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
