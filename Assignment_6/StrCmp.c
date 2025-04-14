#include <stdio.h>
int main(){
    char str1[100],str2[100],character;
    int c1=0,i,c2=0;
    printf("Enter First String:\n");
    do{
        character=getchar();
        str1[c1]=character;
        c1++;
    }while(character!='\n');
    str1[c1-1]='\0';
    printf("Enter Second String:\n");
    do{
        character=getchar();
        str2[c2]=character;
        c2++;
    }while(character!='\n');
    str2[c2-1]='\0';
    printf("You entered-String1: %s\n",str1);
    printf("You entered-String2: %s\n",str2);
    if(c1!=c2){
        printf("Strings are not equal\n");
    }
    else{
        for(i=0;i<c1;i++){
            if(str1[i]!=str2[i]){
                printf("Strings are not equal\n");
                break;
            }
        }
        if(i==c1){
            printf("Strings are equal\n");
        }
    }
}