#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long A,B,N,s,p;
	    cin>>A>>B>>N;
	    if((N%2)!=0)
	        {
	            s = A*2;
	            p = B;
	        }
	    else
	    {
	        s = A;
	        p = B;
	    }
	       if(s>=p)
	        cout<<s/p<<endl;
	        else
	        cout<<(p/s)<<endl;
	        
	}
	return 0;
} 