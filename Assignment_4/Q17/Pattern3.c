#include <stdio.h>
int main(){
    int i,j,r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("The pattern:\n");
    for(i=r;i>=1;i--){
        for(j=i;j>1;j--){
            printf("   ");
        }
        for(j=1;j<=(r-i+1);j++){
            printf(" * ");
        }
        for(j=0;j<(r-i);j++){
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