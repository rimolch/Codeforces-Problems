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
    for(int tc=1;tc<=t;tc++){
        int n,m;
        cin>>n>>m;
        map<pair<int,int>,bool>is_visited;
        int done=1;
        while(m--){
            int a,b;
            cin>>a>>b;
            if(is_visited[{a,b}]){
                done=0;
            }
            is_visited[{a,b}]=1;
        }
        if(done)cout<<"Scenario #"<<tc<<": possible"<<endl;
        else cout<<"Scenario #"<<tc<<": impossible"<<endl;
    }
}
