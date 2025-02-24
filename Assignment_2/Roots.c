//
// Created by Ankit Talukder on 16/02/25.
//
#include <stdio.h>
#include <math.h>
int main(){
  float a,b,c,d,x,x1,x2;
  printf("Enter the coeffiecients of the quadritic equation (Values of a,b,c):\n");
  scanf("%f%f%f",&a,&b,&c);
  d=pow(b,2)-4*a*c;
  if(a==0 && b==0){
    printf("No solution");
    }
  else if(a==0){
      x=-c/b;
      printf("There is one real root: %f",x);
  }
  else if(d<0){
      printf("No real root");
  }
  else{
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("There are two real roots %f %f",x1,x2);
  }
  return 0;
}
