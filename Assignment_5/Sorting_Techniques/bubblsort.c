//Bubble sorting technique
#include <stdio.h>
int main(){
    int n,a[100],temp;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //Bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}