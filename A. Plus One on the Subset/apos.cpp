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
     vector<int>ar(n);
     int mini,maxi;
     for(int i=0;i<n;i++)
     {
         cin>>ar[i];
     }
     mini = *min_element(ar.begin(),ar.end());
     maxi = *max_element(ar.begin(),ar.end());
     cout<<(maxi-mini)<<endl;
  }
 
   return 0;
}
