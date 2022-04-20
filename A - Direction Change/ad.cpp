
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,x,y,ans=0;
        cin>>n>>m;
        if(n==1&&m==1)
        {
            cout<<0<<endl;
        }
        else if((n>2&&m==1)||(m>2)&&n==1)
        {
           cout<<-1<<endl;
        }
        else
        {
           x=min(n,m),y=min(n,m);
           ans+=2*(x-1);
           ans+=2*(max(n,m)-x);
           if((max(n,m)-x)%2==1)
           {
              ans--;
           }
           cout<<ans<<endl;
        }
    }
    return 0;
}
