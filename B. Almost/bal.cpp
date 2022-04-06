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
  char a[410][410];
  vector<pair<int,int>>pt;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          cin>>a[i][j];
          if(a[i][j]=='*')
          {
              pt.push_back({i,j});
          }
      }
  }
  if(pt[0].first==pt[1].first)
  {
      if(pt[0].first==0)
      {
          a[pt[0].first+1][pt[0].second]='*';
          a[pt[1].first+1][pt[1].second]='*';
      }
      else
      {
         //a[pt[0].first+1][0]='*';
         //a[pt[1].second+1][1]='*';
         a[0][pt[0].second]='*';
         a[0][pt[1].second]='*';
      }
  }
  else if(pt[0].second==pt[1].second)
  {
      if(pt[0].second==0)
      {
          a[pt[0].first][pt[0].second+1]='*';
          a[pt[1].first][pt[1].second+1]='*';
      }
      else
      {
          a[pt[0].first][0]='*';
          a[pt[1].first][0]='*';
      }
  }
   else
   {
      sort(pt.begin(),pt.end());
      a[pt[0].first][pt[1].second] = '*';
      a[pt[1].first][pt[0].second] = '*';
   }
   for(int i =0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cout<<a[i][j];
       }
       cout<<endl;
   }
  }
 return 0;
}
