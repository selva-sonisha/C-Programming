#include<stdio.h>
int swap(int*a,int*b){
  int c;
  c=*a;
  *a=*b;
  *b=c;
  return 0;
}
int main(){
  int a=10;
  int b=20;
  int c;
  printf("Before Swapping:%d%d",a,b);
  c=swap(&a,&b);
  printf("After Swapping:%d%d",a,b);
  return 0;
}
