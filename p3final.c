#include<stdio.h>
int input_n()
{
  int n;
  printf("enter number of values to add\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int sum=0;
  for(int i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  return sum;
}
void output(int n,int sum)
{
  int i;
 for(i=1;i<n;i++)
 {
   printf("%d+",i);
 }
 printf("%d=%d",n,sum);
}
int main()
{
  int x,y;
  x=input_n();
  y=sum_n(x);
  output(x,y);
  return 0;
}