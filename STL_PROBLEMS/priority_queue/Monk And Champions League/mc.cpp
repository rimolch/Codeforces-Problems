#include<bits/stdc++.h>
#define ll long long
const int mx=1e5+123;
int ar[mx];
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m,n;
    cin>>m>>n;
    priority_queue<ll>pq;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        pq.push(x);
    }
    ll ans=0;
    while(n--){
       if(!pq.empty()){
        int a=pq.top();
        pq.pop();
        ans+=a;
        a--;
        if(a>0)pq.push(a);
       }
    }
    cout<<ans<<endl;
    return 0;
}

