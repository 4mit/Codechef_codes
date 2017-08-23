#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int result(long int x)
{
  //long int
  int q=1,i=1,temp=0;
  for(i=5;q!=0;i=i*5)
  //while(q!=0)
  {
   q=x/i;
   temp+=q;
   //cout<<temp<<endl;
  }
  return temp;
}
int main()
{
  int t,i;
  long int a;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
   scanf("%ld",&a);
   cout<<result(a)<<endl;
  }
return 0;
}