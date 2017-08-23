#include <bits/stdc++.h>
#include<map>
using namespace std;
int main(int argc, char** argv)
{
	int t;
	cin>>t;
	while(t--)
	{
	      
	      map<string,int> ma;
      	int i,coin;
         string str;
      	for(int i=0;i<4;i++){
      		
      		cin>>str;
      		cin>>coin; 	
      		ma.insert(make_pair(str,coin));
      	}
	
	      int r,m,b,e;
	      r= ma["RealMadrid"]; m = ma["Malaga"];
	      b =ma["Barcelona"];     e =ma["Eibar"];
		   if( r<m  &&  b>e )
		   	cout<<"Barcelona"<<endl;
		   else
		   {
			   cout<<"RealMadrid"<<endl;
		   }
		   ma.clear();
	}//while
	return 0;
} 