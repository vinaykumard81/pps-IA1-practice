#include <stdio.h>
int input_n()
{
  int n;
  printf("enter the number \n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int sum=0,i;
  i=1;
  while(i<=n)
  {
    sum=sum+i;
    i++;
  }
  return sum;
}
void output(int n,int sum)
{
  int i=0;
  for (i;i<n;i++)
  {
    printf("%d+",i);
  }
  printf("%d is %d\n",i,sum);
}

int main()
{
  int b,sm;
  b=input_n();
  sm=sum_n(b);
  output(b,sm);
  return 0;
}