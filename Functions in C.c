#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans;
    int m1,m2;
    if (a>b)
     {
         m1=a;}
         else
        { m1= b;

     }
if (c>d)
{
    m2= c;}
    else
  {  m2= d;
}
if(m1>m2)
{ 
    ans = m1;}
    else
    {ans = m2;
}
printf("%d",ans);
return 0;
}
