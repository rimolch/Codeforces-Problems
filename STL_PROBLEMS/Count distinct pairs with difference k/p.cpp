#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int a[123];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>k;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j&&a[i]-a[j]==k){
                    v.push_back({a[i],a[j]});
                }
            }
        }
        sort(v.begin(),v.end());
        int sz=unique(v.begin(),v.end())-v.begin();
        cout<<sz<<endl;
    }
    return 0;
}

