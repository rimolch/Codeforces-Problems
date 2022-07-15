#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
      vector<int>vt;
      int n,x;
      cin>>n>>x;
      for(int i=0;i<2*n;i++){
        int v;
        cin>>v;
        vt.push_back(v);
      }
     sort(vt.begin(),vt.end());
     int done =1;
    for(int i=0;i<n;i++){
        if(vt[n+i]-vt[i]<x){
            done=0;
        }
     }
     if(done)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    }
    return 0;
}
