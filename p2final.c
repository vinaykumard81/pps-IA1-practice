#include<stdio.h>
int input()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  int largest;
  if(a>b && a>c)
  {
    largest=a;
  }
  else if(b>c)
  {
    largest=b;
  }
  else
  {
    largest=c;
  }
  return largest;
}
void output(int a,int b,int c,int largest)
{
  printf("greatest number among three numbers is %d\n",largest);
}
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
}