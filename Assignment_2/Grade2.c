//
// Created by Ankit Talukder on 18/02/25.
//
#include <stdio.h>
int main(){
  int marks;
  printf("Enter your marks: ");
  scanf("%d", &marks);
  
  //Using if else

  if(marks>=90&&marks<=100){
    printf("Grade O");
  }
  else if(marks>=80&&marks<90){
    printf("Grade E");
  }
  else if(marks>=70&&marks<80){
    printf("Grade A");
  }
  else if(marks>=60&&marks<70){
    printf("Grade B");
  }
  else if(marks>=50&&marks<60){
    printf("Grade C");
  }
  else if(marks>=40&&marks<50){
    printf("Grade D");
  }
  else if(marks>=0&&marks<40){
    printf("Grade F");
  }
  else{
    printf("Invalid Input.Please enter marks between 0 and 100\n");
  }
  return 0;
}