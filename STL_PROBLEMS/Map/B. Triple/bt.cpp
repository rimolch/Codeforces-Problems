#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
        map<int,int>mp;
        int x,ans=-1;
        cin>>n;
         for(int i=0;i<n;i++)
         {
               cin>>x;
               mp[x]++;
         }
          for(auto it:mp)
          {
              if(it.second>=3)
              {
                  ans = it.first;
                  break;
              }
          }
          cout<<ans<<endl;
    }
    return 0;
}
