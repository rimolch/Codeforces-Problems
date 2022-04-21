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
      bool is_found = true;
      for(int i=0;i<n;i++)
      {
          cin>>ar[i];
      }
      for(int j=0;j<n;j++)
      {
          if(j-2>-1&&ar[j]%2!=ar[j-2]%2)
          {
             is_found=false;
             break;
          }
      }
      if(is_found)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
    }
    return 0;
}
