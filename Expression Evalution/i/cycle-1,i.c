#include<stdio.h>
#include<math.h>
int main(){
  int n,x,i;
  float sum=1;
  printf("enter no of times loop should iterate");
  scanf("%d",&n);
  printf("enter x values");
  scanf("%d",&x);
  printf("%f",sum);
  for(i=1;i<n;i=i+1){
    sum=sum+pow(x,i);
    printf("%f",pow(x,i));
  }
  printf("=%f",sum);
  return 0;
}