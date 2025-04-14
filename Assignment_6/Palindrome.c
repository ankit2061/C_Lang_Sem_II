#include <stdio.h>
int main(){
    char line[100],character;
    int c=0;
    printf("Enter text. Press <return> at the end.\n");
    do{
        character=getchar();
        line[c]=character;
        c++;
    }while(character!='\n');
    line[c-1]='\0';
    printf("You entered: %s\n",line);
    printf("%s is ", line);
    for(int i=0; i<c-1; i++){
        if(line[i] != line[c-i-2]){
            printf("not a palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
    return 0;
}