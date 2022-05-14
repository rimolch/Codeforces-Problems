#include<bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
    string s;
    cin>>s;
    ll n = s.length();
    vector<ll>pre(n+1,0);
    ll ones = 0;
    for(ll i = 1; i<=n; i++)
    {
        pre[i] = pre[i-1] + (s[i-1]-'0');
        if(s[i-1]=='1')ones++;
    }
    ll ans = INT_MAX;
    for(ll i = ones; i<=n; i++)
    {
        ll temp = pre[i]-pre[i-ones];
        ans = min(ans,ones-temp);
    }
    cout<<ans<<endl;

}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}
