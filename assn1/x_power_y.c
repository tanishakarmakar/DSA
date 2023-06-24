#include <stdio.h>
#include<math.h>

int power(int a,int b)
{
     int ans;
     ans=pow(a,b);
     return ans;

     printf("  %d^%d : %d", a, b, ans);
}
int main()
{
  int x,y,a;
 printf("Enter the value of x:");
 scanf("%d",&x);
 printf("Enter the value of y:");
 scanf("%d",&y);
 a=power(x,y);

 printf("The value of x^y=%d",a);

 return 0;
}
