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
       int a,x;
       cin>>a>>x;
       if(a==1){
        s.insert(x);
       }
       else if(a==2){
          s.erase(x);
       }
       else{
          if(s.count(x)==1)cout<<"Yes"<<endl;
          else cout<<"No"<<endl;
       }
    }
    return 0;
}
