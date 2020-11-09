#include <stdio.h>
 int main()
 {
     int a,b,c,d,e;
     scanf("%d %d",&a,&b);
     c=a+b;
     d=a-b;
     if(d<0)
     {
         d=d*-1;
     }
     else 
     {d=1*d;
     }

    
     printf("%d",c);
     printf("\n");
     printf("%d",d);
 }
