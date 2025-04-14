#include <stdio.h>
int main(){
    char str1[100],str2[100],character;
    int c=0,i;
    printf("Enter text. Press <return> at the end.\n");
    do{
        character=getchar();
        str1[c]=character;
        c++;
    }while(character!='\n');
    str1[c-1]='\0';
    for(i=0;i<c;i++){
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("You entered-String1: %s\n",str1);
    printf("The Copy-String2: %s\n",str2);
    return 0;
}