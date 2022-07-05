#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
bool isVowel(char ch)
{
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<string>v;
    int cnt[]={5,7,5};
    for(int i=0;i<3;i++)
    {
        string s;
        char c;
        cin>>c;
        getline(cin,s);
        s =s+c;
        v.push_back(s);
    }
    for(int i=0;i<3;i++)
    {
        int c=0;
      for(auto u:v[i])
      {
          if(isVowel(u))
          {
              c++;
          }
      }
      if(c!=cnt[i])
      {
         return cout<<"NO\n",0;
      }
    }
    cout<<"YES"<<endl;
}
