#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    for(int i=0;i<n;i++){
        string name,ip;
        cin>>name>>ip;
        mp[ip]=name;//the name corresponding to ip
    }
    while(m--){
        string s,ipname;
        cin>>s>>ipname;
        ipname.pop_back();
        cout<<s<<" "<<ipname<<"; #"<<mp[ipname]<<endl;
    }
}
