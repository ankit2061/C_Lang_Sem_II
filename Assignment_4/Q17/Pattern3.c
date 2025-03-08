#include <stdio.h>
int main(){
    int i,j,k,r,k1;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("The pattern:\n");
    for(i=r;i>=1;i--){
        for(j=i;j>0;j--){
            printf("   ");
        }
        for(k=1;k<=(r-i+1);k++){
            printf(" * ");
        }
        for(k1=0;k1<(r-i);k1++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
/*
Enter the number of rows: 5
The pattern:
                * 
             *  *  * 
          *  *  *  *  * 
       *  *  *  *  *  *  * 
    *  *  *  *  *  *  *  *  * 
*/