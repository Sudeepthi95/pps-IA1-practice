#include <stdio.h>
int input()
{
  int a;
  printf("Enter a value\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
if((a>c)&&(a>b))
return a;
else if((b>c)&&(b>a))
return b;
else
return c;
}
void output(int largest)
{
  printf("largest number is %d\n",largest);
}
int main()
{
  int x, y, z, largest;
  x=input();
  y=input();
  z=input();
  largest=cmp(x, y, z);
  output(largest);
  return 0;
}