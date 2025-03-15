// Find the transpose of a 4 × 4 matrix.
#include <stdio.h>
int main(){
    int a[4][4],i,j;
    //Taking input
    printf("Enter the elements of 4x4 matrix: \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //Printing out the original matrix
    printf("\nThe matrix is: \n\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //Printing out the transpose of the matrix
    printf("\nThe transpose of the matrix is: \n\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}