//
// Created by Ankit Talukder on 15/02/25.
//
#include <stdio.h>
int main(){
  int n1,n2;
  printf("Enter two numbers: ");
  scanf("%d%d",&n1,&n2);
  printf("Before swapping: n1 = %d, n2 = %d\n",n1,n2);
  n1=n1+n2;
  n2=n1-n2;
  n1=n1-n2;
  printf("After swapping: n1 = %d, n2 = %d\n",n1,n2);
  return 0;
}