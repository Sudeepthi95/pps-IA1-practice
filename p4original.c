#include<stdio.h>
int input ()
{
  int n;
  printf("enter the size of array\n");
  scanf("%d",&n);
  return n;
}
void aray (int n,int a[n])
{
  int i;
  for (i=0;i<n;i++)
{
  printf("enter the element\n");
  scanf("%d",&a[i]);
}

}
int add (int n,int a[n])
{
  int sum=0,i;
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}

void output(int sum)
{
  printf("sum is %d\n",sum);
}
int main ()
{
  int n,sum;
  n=input();
  int a[n];
  aray(n,a);
  sum=add(n,a);
  output(sum);
  return 0;
}