#include<bits/stdc++.h>
#define ll long long int
const int mx=5e5+123;
int ar[mx];
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    set<int>s;
    int p;
    cin>>p;
    while(p--){
        int a;
        cin>>a;
        s.insert(a);
    }
    int q;
    cin>>q;
    while(q--){
        int b;
        cin>>b;
        s.insert(b);
    }
    if(s.size()==n)cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
}
