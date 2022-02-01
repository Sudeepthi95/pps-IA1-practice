#include <stdio.h>
int input(int *a,int *b,int *c)
{
  printf("Enter three numbers\n");
  scanf("%d%d%d",a,b,c);
}
int cmp(int a,int b,int c,int *largest)
{
  if(a>b && a>c)
  *largest=a;
  else if(b>a && b>c)
  *largest=b;
  else
  *largest=c;
}
void output(int largest)
{
  printf("largest number is %d\n",largest);
}
int main()
{
  int x,y,z,largest;
  input(&x,&y,&z);
  cmp(x,y,z,&largest);
  output(largest);
  return 0;
}