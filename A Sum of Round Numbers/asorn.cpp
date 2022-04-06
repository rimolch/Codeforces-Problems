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
    vector<int>vect;
    int res;
    if(n%10!=0)
    {
        vect.push_back(n%10);
         res = n%10;
        n-=res;
    }
    if(n%100!=0)
    {
        vect.push_back(n%100);
        res = n%100;
        n-=res;
    }
    if(n%1000!=0)
    {
       vect.push_back(n%1000);
       res = n%1000;
       n-=res;
    }
    if(n%10000!=0)
    {
       vect.push_back(n%10000);
    }
    if(n>=10000 && n%10000==0)
    {
       vect.push_back(n);
    }
      cout<<vect.size()<<endl;
      for(int i=0;i<vect.size();i++)
      {
          cout<<vect[i]<<" ";
      }
  }
  return 0;
}
