#include <iostream>
using namespace std;
 
int main() {
	
	int t;
	cin>>t;
   while(t--)
   {
      unsigned long long int u,v;
      cin>>u>>v;
      unsigned long long int ch =(v*(2*u+v+1))/2;
      unsigned long long int cv =((u*(u+3))/2)+1;
      cout<<ch+cv<<endl; 
      
   }
	return 0;
}