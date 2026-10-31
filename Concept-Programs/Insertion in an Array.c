#include<stdio.h>
int main(){
  int a[10]={1,2,4,5};
  int n=4,index=2,value=3;
  for(int i=4;i>index;i--){
    a[i]=a[i-1];
  }
  a[index]=a[i];
  n++;
  for(int i=0;i<5;i++){
    printf("%d".a[i]);
  }
  return 0;
}
