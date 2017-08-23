#include<iostream>
#include<stdio.h>
using namespace std;
int getSum(int x){
int fd,ld,r;
fd=x%10;
 while(x>=10)
 {
   x/=10;
 }
return fd+x%10;
}
int main()
{
    int t,i,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
     cin>>n;
     cout<<getSum(n)<<endl;
    }
}
 