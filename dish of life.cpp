#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,cnt,flag=0;
        cin>>n>>k;
        cnt=k;
        int s[k]={0};
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            for(int j=0;j<p;j++)
            {
                int a;
                cin>>a;
                if(s[a-1]==0)
                {
                    s[a-1]=1;
                    cnt--;
                    if(cnt==0)
                    flag=i;
                }
            }
        }
        if(cnt==0)
        {
            if(flag==n-1)
                cout<<"all"<<endl;
            else if(flag<n-1)
                cout<<"some"<<endl;
        }
        else if(cnt>0)
        cout<<"sad"<<endl;
        flag=0;
    }
    return 0;
} 