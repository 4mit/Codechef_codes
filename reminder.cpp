Find Reminder

#include<stdio.h>
#include<iostream>
using namespace std;
int Find_reminder(int x, int y)
{
    return x%y;
}
int main()
{
    int a,b,n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
     cin>>a>>b;
     cout<<Find_reminder(a,b)<<endl;
    }
}