#include<iostream>
#include<cstring>
using namespace std;
int main(){
   
   int t;
   cin>>t;
   while(t--)
   {
      string  s;
      cin>>s;
     
      int len =s.length();
    
      int seq=0; 
      for(int i=0;i<len-1;i++)
      {
         if((int)s[i]>(int)s[i+1])
         {
            seq++;
            cout<<"no"<<endl;
            break;
            
         }
      }
      if(seq==0){
         cout<<"yes"<<endl;
      }
   }
   return 0;
}