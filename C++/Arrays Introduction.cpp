#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int arr[1000000],i,j,temp,s;
    
    cin>>s;
   
    for(i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    j=i-1;
    i=0;
    while(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    
    for(i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";

    }}
