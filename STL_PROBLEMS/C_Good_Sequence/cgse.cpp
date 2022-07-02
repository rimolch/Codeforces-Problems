
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int ans =0;
    for(auto u:mp){
       if(u.second>=u.first) {
        ans+=(u.second-u.first);
       }
       else{
        ans+=u.second;
       }
    }
    cout<<ans<<endl;
    return 0;
}

