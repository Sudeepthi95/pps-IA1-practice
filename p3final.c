#include<stdio.h>
int input()
{
  int n;
  printf("enter the value of n\n");
  scanf("%d",&n);
  return n;
}
int add(int n)
{
  int sum=0,i;
  for(i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  return sum;
}
void output(int sum)
{
  printf("sum is %d\n",sum);
}
int main()
{
  int n,sum;
  n=input();
  sum=add(n);
  output(sum);
  return 0;
}