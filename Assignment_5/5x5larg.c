// Print the largest number from any 5 × 5 matrix. [CO1,CO3,CO4,CO5]
#include <stdio.h>
int main(){
    int a[5][5],i,j,max;
    printf("Enter the elements of 5x5 matrix: \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    printf("\nThe matrix is: \n\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ",a[i][j]);
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
        printf("\n");
    }
    printf("The largest number in the matrix is: %d\n",max);
    return 0;
}