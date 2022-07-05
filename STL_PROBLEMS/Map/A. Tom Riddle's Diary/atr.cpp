#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,bool>is_visited;
    while(n--){
        string s;
        cin>>s;
        if(is_visited[s]==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        is_visited[s]=1;
    }
    return 0;
}
