#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
     int n;
     cin>>n;
     int ar[n];
     map<int,int>mp;
     for(int i=0;i<n;i++)
     {
         cin>>ar[i];
         mp[ar[i]]++;
     }
     int ans = 0;
     if(mp[2]>0)
     {
         ans = 1;
     }
     sort(ar,ar+n);
     for(int i=0;i<n-1;i++)
     {
         if(ar[i+1]-ar[i]==1)
         {
             ans = 1;
         }
     }
     if(mp[0]>0&&mp[1]>0)
     {
         cout<<"NO"<<endl;
     }
     else if(mp[1]==0||mp[1]==n)
     {
         cout<<"YES"<<endl;
     }
     else
     {
         if(ans==1)
         {
             cout<<"NO"<<endl;
         }
         else
         {
             cout<<"YES"<<endl;
         }
     }
  }
 return 0;
}
