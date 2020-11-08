#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
int a,b,c,d,e,f,ans;
cin>>a>>b>>c>>d;

if(a>b)
{
e=a;
}
else
{
e=b;
}

if(c>d)
{
f=c;
}
else
{
f=d;
}
if(e>f)
{
ans=e;
}
else
{ans=f;}
cout<<ans;
}


