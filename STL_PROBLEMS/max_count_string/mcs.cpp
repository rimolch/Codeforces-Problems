#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        char c;
        cin>>c;
        getline(cin,s);
        s=c+s;
        string tmp;
        vector<string>v;
        for(auto u:s){
            if(isspace(u)){
                v.push_back(tmp);
                tmp.clear();
            }
            else{
                tmp+=u;
            }
        }
        v.push_back(tmp);
        map<string,int>mp;
        int maxi=0;
        for(auto u:v){
            mp[u]++;
            maxi=max(maxi,mp[u]);
        }
        string ans;
        for(auto u:v){
            if(mp[u]==maxi){
                ans=u;
                break;
            }
        }
        cout<<ans<<" "<<maxi<<endl;
    }
    return 0;
}

