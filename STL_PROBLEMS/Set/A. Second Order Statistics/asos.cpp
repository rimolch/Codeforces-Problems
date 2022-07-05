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
    while(n--){
        int a;
        cin>>a;
        s.insert(a);
    }
    if(s.size()==1)cout<<"NO"<<endl;
    else{
        cout<<*(++s.begin())<<endl;
    }
    return 0;
}
