#include <stdio.h>
int main(){
    int n,i,max,max2;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter a number: ");
        scanf("%d",&a[i]);
    }
    max=a[0];
    max2=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max2=max;
            max=a[i];
        }
        else if(max2!=max && max2<a[i]){
            max2=a[i];
        }
    }
    printf("Second max= %d\n",max2);
    return 0;
}