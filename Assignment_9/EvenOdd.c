#include <stdio.h>
int main(){
    FILE *sourceFile,*evenFile,*oddFile;
    char sourceFileName[100]="numbers.txt";
    int num;

    //Open source file for reading
    sourceFile=fopen(sourceFileName,"r");
    if(sourceFile==NULL){
        printf("Error: Cannot open source file %s\n",sourceFileName);
        return 1;
    }

    //Open even.txt and odd.txt for writing
    evenFile=fopen("even.txt","w");//save in pointer
    oddFile=fopen("odd.txt","w");

    if(evenFile==NULL||oddFile==NULL){
        printf("Error: Cannot create output files.\n");
        fclose(sourceFile);
        return 1;
    }

    //Reads integers from Source and writes to even or odd files
    while(fscanf(sourceFile,"%d",&num)==1){
        if(num%2==0)
            fprintf(evenFile,"%d\n",num);
        else
            fprintf(oddFile,"%d\n",num);
    }
    printf("Numbers have been separated into even.txt and odd.txt\n");

    //Close all files
    fclose(sourceFile);
    fclose(evenFile);
    fclose(oddFile);

    return 0;
}