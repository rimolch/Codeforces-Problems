#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<string,int>mp;
        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            string s;
            cin>>s;
            s=s+c;
            mp[s]++;
        }
        int ans=0;
        for(auto u:mp){
            if(u.second==2){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
