#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
        v[i].first*=-1;
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(auto u:v){
       if(u==v[k-1]){// u is a pair of int ,(k-1)th jhe team ta ache setar soman penalty and solved koijoner ache 
        ans++;
       }
    }
   cout<<ans<<endl;
    return 0;
}

