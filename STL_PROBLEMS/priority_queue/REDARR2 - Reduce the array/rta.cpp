#include<bits/stdc++.h>
#define ll long long int
const int mx=1e5+123;
int ar[mx];
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       vector<ll>ar(n);
       priority_queue<ll,vector<ll>,greater<ll>>pq;
       for(int i=0;i<n;i++){
         cin>>ar[i];
         pq.push(ar[i]);
       }
       ll ans=0;
       while(pq.size()>1){
            ll a,b,c;
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            ans+=(a+b);
            c=a+b;
            pq.push(c);
       }
       cout<<ans<<endl;
    }
    return 0;
}
