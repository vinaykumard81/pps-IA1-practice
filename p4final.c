#include<stdio.h>
int input()
{
  int a;
  printf("enter the size of the array:\n");
  scanf("%d",&a);
  return a;
}
void input_ar(int n,int a[n])
{
  for (int i=0;i<n;i++)
  {
    printf("enter the values into the array\n");
    scanf("%d",&a[i]);
  }
}

int sum(int n,int a[n])
{
  int sum=0;
  for (int i=0;i<n;i++)
  {
    sum=sum+a[i]; 
  }
  return sum;
}
void output(int n,int a[n],int sum)
{
  int i;
  for (i=0;i<n-1;i++)
  {
    printf("%d+",a[i]);
  }
  printf("%d is %d\n",a[i],sum);
}
int main()
{
  int a,s;
  a=input();
  int b[a];
  input_ar(a,b);
  s=sum(a,b);
  output(a,b,s);
  return 0;
}