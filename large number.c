#include<stdio.h>
int large(int*a,int*b){
  if(*a>*b){
printf ("Larger number is:%d",a);
  }
else{
printf("Larger number is :%d",b);
}
return 0;
}
int main(){
  int a=10;
int b=20;
int c;
c=large(&a,&b);
return 0;
}
