//Selection Sorting technique
#include <stdio.h>
int main(){
    int n,a[100],key,min;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //Selection Sort
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        key=a[min];
        a[min]=a[i];
        a[i]=key;
    }
    
    printf("The sorted array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}