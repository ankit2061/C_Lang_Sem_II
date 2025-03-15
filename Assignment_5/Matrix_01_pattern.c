/* Generate following pattern by using a single 5 × 5 Array. [CO1,CO3,CO5,CO5]
1 0 0 0 0
0 1 0 0 0
0 0 1 0 0
0 0 0 1 0
0 0 0 0 1
*/
#include <stdio.h>
int main(){
    int a[5][5],i,j;
    //Printing out the pattern
    printf("\nThe matrix is: \n\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                a[i][j]=1;
            }
            else{
                a[i][j]=0;
            }
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}